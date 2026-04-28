---
description: "Use when: working in this AtCoder ABC C++ solutions repository; build/run, layout, and style conventions."
---

# Agent Instructions

## Where to look first
- Project overview and conventions: [CLAUDE.md](CLAUDE.md)

## Repository layout
- Solutions live under `abc0xx/`, `abc1xx/`, `abc2xx/`, ... grouped by contest number.
- Each problem folder has `main.cpp` and usually `input.txt` for local tests.

## Build and run (local)
- From a problem directory, build and run with debug STL checks enabled:

```bash
mkdir -p build && /usr/local/bin/g++ -g -std=c++23 -Wall -Wextra -D_GLIBCXX_DEBUG main.cpp -o build/main && ./build/main < input.txt
```

## C++ style conventions
- Use `#include <bits/stdc++.h>`
- Fast I/O: `ios::sync_with_stdio(false); cin.tie(nullptr);`
- Type alias: `using ll = long long;`
- Loop macro: `#define rep(i, n) for (int i = 0; i < (n); ++i)`
- Format via `.clang-format` (Google-based, 4-space indent)
