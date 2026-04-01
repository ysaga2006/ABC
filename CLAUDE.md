# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Overview

AtCoder Beginner Contest (ABC) の C++ 解答リポジトリ。

## Directory Structure

コンテストは百の位でグループ化される:

```
abc0xx/abc042/a/main.cpp   ← 解答ファイル
                /input.txt  ← テスト入力
abc4xx/abc420/a/
              b/
              c/
              contest.acc.json
```

## Build & Run

VSCode の Code Runner (Ctrl+Alt+N) を使う場合:

```bash
cd abc4xx/abc420/a
g++ -g -std=c++23 -Wall -Wextra -D_GLIBCXX_DEBUG main.cpp -o build/main && ./build/main < input.txt
```

デバッグビルドは `-D_GLIBCXX_DEBUG` を付けること（STL の境界チェックが有効になる）。

## Contest Setup

`acc` が使えない場合は `setup_contest.sh` で手動セットアップ:

```bash
./setup_contest.sh abc999          # a〜g の7問分を作成
./setup_contest.sh abc999 d e      # 特定の問題だけ追加
```

テンプレートは `~/Library/Preferences/atcoder-cli-nodejs/cpp/main.cpp` から取得する。

## Code Style

- ヘッダー: `#include <bits/stdc++.h>`
- I/O 高速化: `ios::sync_with_stdio(false); cin.tie(nullptr);`
- 型エイリアス: `using ll = long long;`
- ループマクロ: `#define rep(i, n) for (int i = 0; i < (n); ++i)`
- フォーマット: `.clang-format`（Google スタイルベース、インデント4スペース）

## Toolchain

- Compiler: `/usr/local/bin/g++` (Homebrew GCC 15.2.0)
- Standard: C++23
- AC Library: `/opt/homebrew/Cellar/gcc/15.2.0_1/include/c++/15/ac-library-master`
