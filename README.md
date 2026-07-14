# MetaC

一个提供常用辅助工具和函数的 C 语言工具库。

## 特性

- **C11 标准** — 现代 C 语言，严格编译选项
- **零依赖** — 轻量、快速
- **充分测试** — 全面的测试覆盖
- **静态库** — 可轻松链接到任何项目

## 使用方式

```c
#include "metac.h"

int main(void) {
    const char* message = greet("世界");
    printf("%s\n", message);
    return 0;
}
```

编译：

```bash
# 添加到你的项目
gcc -I/path/to/metac/include your_program.c /path/to/metac/build/libmetac.a
```

## 开发指南

```bash
# 构建
make

# 运行测试
make test

# 清理构建产物
make clean

# 格式化代码（需安装 clang-format）
make format

# 代码静态检查（需安装 clang-tidy）
make lint
```

## 环境要求

- GCC 或 Clang 编译器
- GNU Make
- ar（用于创建静态库）

## 许可证

Apache License 2.0
