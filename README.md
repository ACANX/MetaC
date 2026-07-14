# MetaC

A C utility library providing common helpers and tools.

## Features

- **C11 standard** — modern C with strict compiler flags
- **Zero dependencies** — lightweight and fast
- **Well-tested** — comprehensive test coverage
- **Static library** — link easily into any project

## Usage

```c
#include "metac.h"

int main(void) {
    const char* message = greet("World");
    printf("%s\n", message);
    return 0;
}
```

Build with:

```bash
# Add to your project
gcc -I/path/to/metac/include your_program.c /path/to/metac/build/libmetac.a
```

## Development

```bash
# Build
make

# Run tests
make test

# Clean build artifacts
make clean

# Format code (requires clang-format)
make format

# Lint code (requires clang-tidy)
make lint
```

## Prerequisites

- GCC or Clang compiler
- GNU Make
- ar (for static library creation)

## License

Apache License 2.0
