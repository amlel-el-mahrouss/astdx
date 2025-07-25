# SNU Open C++ Library

[![License: GPL-2.0](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

## Brief:

A C++ library with additional modules for your C++ SDLC.

## Getting Started:

Here is an example of how snu::opt works.

```cpp
#include <lib/logic/opt.hpp>

int main(int argc, char** argv)
{
  auto opt = snu::opt(snu::eval_eq(50, 50)).expect("snu::eval_eq, does not match!");
  opt = snu::opt(snu::eval_eq(50, 40));
  opt.expect("this time it doesn't.");
  
  return EXIT_SUCCESS;
}
```

##### (c) 2025 SNU Systems, Corp all rights reserved.