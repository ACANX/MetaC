/**
 * MetaC — Unit tests
 */

#include "metac.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>

#define METAC_TEST

int main(void) {
    printf("Running tests...\n");

    /* Test greet */
    const char* result = greet("World");
    assert(strcmp(result, "Hello, World!") == 0);

    result = greet("MetaC");
    assert(strcmp(result, "Hello, MetaC!") == 0);

    /* Test version */
    assert(strcmp(metac_version(), "0.1.0") == 0);

    printf("All tests passed!\n");
    return 0;
}
