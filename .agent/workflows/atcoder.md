---
description: AtCoderの問題を解くためのワークフロー（テスト・提出・デバッグ）
---

# AtCoder ワークフロー

> CLI操作を中心としたワークフロー。ターミナルから全操作を完結できます。

---

## 🏁 A. リアルタイムコンテスト参加時

### 1. セットアップ（コンテスト開始前）

```bash
cd /Users/sagarayuto/CompetetingProgramming/ABC
./setup_contest.sh abc999           # a〜gの7問分を作成
./setup_contest.sh abc999 "a b c d" # 問題数を指定する場合
```

### 2. コーディング

```bash
# エディタでファイルを開く
code abc4xx/abc999/a/main.cpp
```

### 3. テストケースの準備

コンテスト中は `oj d` でテストケースを取得できない場合があります。
その場合は手動でテストケースを作成します：

```bash
cd abc4xx/abc999/a
mkdir -p test

# サンプル1を作成
cat > test/sample-1.in << 'EOF'
3
1 2 3
EOF

cat > test/sample-1.out << 'EOF'
6
EOF

# サンプル2以降も同様に sample-2.in / sample-2.out ...
```

あるいは、コンテスト開始後すぐに `oj d` が使えるようになることもあります：

```bash
oj d https://atcoder.jp/contests/abc999/tasks/abc999_a
```

### 4. ビルド & テスト

```bash
# ビルド
g++ -g -std=c++20 -Wall -Wextra -D_GLIBCXX_DEBUG main.cpp -o build/main

# テスト（全サンプルケース）
oj t -c ./build/main -d test
```

### 5. 提出

```bash
# クリップボードにコピー → ブラウザで貼り付け
cat main.cpp | pbcopy
```

ブラウザで問題ページの「提出」を開き、`Cmd + V` で貼り付け → 言語を `C++23 (GCC 15)` に → 提出。

> ⚠ `acc s` は現在セキュリティ強化により使用不可。

### 6. 次の問題へ

```bash
cd ../b
# → 手順 2 から繰り返し
```

---

## 📚 B. 過去問精進時

### 1. セットアップ（テストケース自動取得）

```bash
cd /Users/sagarayuto/CompetetingProgramming/ABC
acc new abc999
```

`abc999/a/main.cpp` と `abc999/a/test/` が自動生成されます。

### 2. コーディング

```bash
code abc4xx/abc999/a/main.cpp
```

### 3. ビルド & テスト

```bash
cd abc4xx/abc999/a

# ビルド
g++ -g -std=c++20 -Wall -Wextra -D_GLIBCXX_DEBUG main.cpp -o build/main

# テスト
oj t -c ./build/main -d test
```

### 4. 提出

```bash
cat main.cpp | pbcopy
# ブラウザで貼り付けて提出
```

### 5. 次の問題へ

```bash
cd ../b
```

---

## ⚡ C. よく使うコマンド一覧

```bash
# === セットアップ ===
acc new abc999                              # 過去問: フォルダ + テストケース取得
./setup_contest.sh abc999                   # ライブ: フォルダのみ作成
oj d https://atcoder.jp/contests/abc999/tasks/abc999_a  # テストケース追加取得

# === ビルド & テスト ===
g++ -g -std=c++20 -Wall -Wextra -D_GLIBCXX_DEBUG main.cpp -o build/main
oj t -c ./build/main -d test               # サンプルケースでテスト

# === 提出 ===
cat main.cpp | pbcopy                       # コードをクリップボードにコピー

# === デバッグ ===
./build/main < test/sample-1.in             # 特定のケースだけ実行
./build/main                                # 手動入力で実行（Ctrl+D で入力終了）

# === ログイン確認 ===
oj login --check https://atcoder.jp/
```

---

## 🐛 D. デバッグ

### CLI でのデバッグ（lldb）

```bash
# ビルド（-g フラグは上記コマンドに含まれている）
lldb ./build/main

# lldb 内の操作:
(lldb) breakpoint set --file main.cpp --line 15   # 15行目にブレークポイント
(lldb) b main.cpp:15                               # 短縮形
(lldb) run < test/sample-1.in                      # テストケースを入力として実行
(lldb) n                                           # 次の行へ（ステップオーバー）
(lldb) s                                           # 関数の中に入る（ステップイン）
(lldb) c                                           # 次のブレークポイントまで続行
(lldb) p i                                         # 変数 i の値を表示
(lldb) p v                                         # ベクター v の内容を表示
(lldb) p v.size()                                  # ベクターのサイズを表示
(lldb) bt                                          # スタックトレース表示（エラー行の特定に便利）
(lldb) q                                           # 終了
```

### VS Code デバッガ（GUI）

GUIのほうが見やすい場合は `F5` でデバッグ開始。操作キー：

| キー | 操作 |
|------|------|
| `F5` | 続行 |
| `F10` | ステップオーバー |
| `F11` | ステップイン |
| `Shift+F5` | 停止 |

### vectorの範囲外アクセス

`-D_GLIBCXX_DEBUG` が有効なので、`v[i]` でも `v.at(i)` でも範囲外アクセスは検出されます。

**行番号を特定するには：**

```bash
# 方法1: lldb で実行してクラッシュ箇所を特定
lldb ./build/main
(lldb) run < test/sample-1.in
# クラッシュしたら:
(lldb) bt    # スタックトレースに行番号が表示される
```

```bash
# 方法2: F5 でデバッグ実行 → クラッシュ行で自動停止
```

`.at()` を使うと `std::out_of_range` 例外として検出され、より明確なメッセージが出ます。

---

## 🔧 E. 環境情報

| 項目 | 設定 |
|------|------|
| コンパイラ | GCC 15 (`/usr/local/bin/g++`) |
| C++バージョン | C++20 |
| デバッグフラグ | `-D_GLIBCXX_DEBUG` |
| テストツール | `oj` (online-judge-tools) |
| コンテストツール | `acc` (atcoder-cli) |
| テンプレート | `~/Library/Preferences/atcoder-cli-nodejs/cpp/main.cpp` |

---

## 🛠️ F. トラブルシューティング

```bash
# oj のログイン状態確認
oj login --check https://atcoder.jp/

# テストケースがないときに取得
oj d https://atcoder.jp/contests/abc999/tasks/abc999_a

# build/ フォルダがないと言われたら
mkdir -p build

# フォーマッタを手動で適用したいとき（VS Code上で）
# Shift + Option + F
```
