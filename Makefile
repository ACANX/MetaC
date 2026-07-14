CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -Iinclude -O2 -g
LDFLAGS =

SRC_DIR = src
TEST_DIR = test
BUILD_DIR = build

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
TEST_SRCS = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJS = $(TEST_SRCS:$(TEST_DIR)/%.c=$(BUILD_DIR)/%.o)
TEST_BINS = $(TEST_SRCS:$(TEST_DIR)/%.c=$(BUILD_DIR)/%)

TARGET = $(BUILD_DIR)/libmetac.a

.PHONY: all clean test format lint

all: $(TARGET)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/%.o: $(TEST_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	ar rcs $@ $^

$(BUILD_DIR)/%: $(BUILD_DIR)/%.o $(TARGET)
	$(CC) $(CFLAGS) $< -o $@ $(TARGET) $(LDFLAGS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

test: $(TEST_BINS)
	@for test_bin in $(TEST_BINS); do \
		echo "Running $$test_bin..."; \
		$$test_bin; \
	done

clean:
	rm -rf $(BUILD_DIR)

format:
	clang-format -i $(SRC_DIR)/*.c $(TEST_DIR)/*.c include/*.h

lint:
	clang-tidy $(SRC_DIR)/*.c -- -Iinclude
