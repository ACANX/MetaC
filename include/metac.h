/**
 * MetaC — 一个提供常用辅助工具和函数的 C 语言工具库。
 *
 * @file metac.h
 * @brief MetaC 库主头文件
 */

#ifndef METAC_H
#define METAC_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

/**
 * @brief 返回问候消息。
 * @param name 要问候的名称。
 * @return 包含问候语的静态缓冲区指针。
 */
const char* greet(const char* name);

/**
 * @brief 返回库版本号字符串。
 * @return 版本号 "0.1.0"。
 */
const char* metac_version(void);

#ifdef __cplusplus
}
#endif

#endif /* METAC_H */
