/**
 * MetaC — A C utility library providing common helpers and tools.
 *
 * @file metac.h
 * @brief Main header for MetaC library
 */

#ifndef METAC_H
#define METAC_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

/**
 * @brief Returns a greeting message.
 * @param name The name to greet.
 * @return A pointer to a static buffer containing the greeting.
 */
const char* greet(const char* name);

/**
 * @brief Returns the library version string.
 * @return Version string "0.1.0".
 */
const char* metac_version(void);

#ifdef __cplusplus
}
#endif

#endif /* METAC_H */
