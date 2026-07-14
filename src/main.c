/**
 * MetaC — A C utility library providing common helpers and tools.
 */

#include "metac.h"
#include <stdio.h>

static char greeting_buffer[256];

const char* greet(const char* name) {
    snprintf(greeting_buffer, sizeof(greeting_buffer), "Hello, %s!", name);
    return greeting_buffer;
}

const char* metac_version(void) {
    return "0.1.0";
}

#ifndef METAC_TEST
int main(void) {
    printf("%s\n", greet("MetaC"));
    printf("Version: %s\n", metac_version());
    return 0;
}
#endif /* METAC_TEST */
