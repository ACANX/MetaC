/**
 * MetaC — 单元测试
 */

#include "metac.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>

#define METAC_TEST

int main(void) {
    printf("运行测试中...\n");

    /* 测试 greet 函数 */
    const char* result = greet("World");
    assert(strcmp(result, "Hello, World!") == 0);

    result = greet("MetaC");
    assert(strcmp(result, "Hello, MetaC!") == 0);

    /* 测试版本号 */
    assert(strcmp(metac_version(), "0.1.0") == 0);

    printf("全部测试通过!\n");
    return 0;
}
