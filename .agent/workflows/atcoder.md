---
description: AtCoderの問題を解くためのワークフロー（テスト・提出）
---

# AtCoder ワークフロー

## 🚀 コンテスト準備

新しいコンテストが始まったら、ターミナルで以下を実行：

```bash
cd /Users/sagarayuto/atcoder/ABC
acc new abc999  # abc999 の部分を実際のコンテストIDに変更
```

これで問題ごとのフォルダ（`a/`, `b/`, `c/` など）とテストケースが自動生成されます。

---

## 📝 問題を解く

1. VS Codeで問題のファイルを開く（例: `abc999/a/main.cpp`）
2. コードを書く
3. **`Cmd + Shift + B`** を押してテスト実行

テスト結果がターミナルに表示されます：

- `[SUCCESS] AC` → 正解
- `[FAILURE] WA` → 不正解（出力を確認）

---

## 📤 提出する

> ⚠️ 現在、AtCoderのセキュリティ強化により `acc s` コマンドでの提出はできません。

### 手動提出の手順

1. VS Codeでコードを全選択 (`Cmd + A`) してコピー (`Cmd + C`)
2. ブラウザで問題ページを開く
3. 「提出」ボタンを押してコードを貼り付け
4. 言語を `C++23 (GCC 15)` に設定して提出

---

## 🔧 環境情報

| 項目 | 設定 |
|------|------|
| コンパイラ | GCC 15 (`/usr/local/bin/g++`) |
| C++バージョン | C++20 |
| デバッグフラグ | `-D_GLIBCXX_DEBUG` (配列外アクセス検出) |
| テストツール | online-judge-tools (`oj`) |
| コンテストツール | atcoder-cli (`acc`) |

---

## 🛠️ トラブルシューティング

### テストケースがない場合

```bash
cd abc999/a
oj d https://atcoder.jp/contests/abc999/tasks/abc999_a
```

### ログイン状態の確認

```bash
oj login --check https://atcoder.jp/
```

### テンプレートの場所

`/Users/sagarayuto/Library/Preferences/atcoder-cli-nodejs/cpp/main.cpp`
