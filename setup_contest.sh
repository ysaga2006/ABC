#!/bin/bash
# ライブコンテスト用セットアップスクリプト
# accが使えないときに、accと同じフォルダ構造を手動で作成します
#
# 使い方:
#   ./setup_contest.sh abc999           # a〜gの7問分を作成
#   ./setup_contest.sh abc999 "a b c d" # a〜dの4問分を作成

CONTEST=$1
PROBLEMS=${2:-"a b c d e f g"}
TEMPLATE="$HOME/Library/Preferences/atcoder-cli-nodejs/cpp/main.cpp"

if [ -z "$CONTEST" ]; then
    echo "使い方: ./setup_contest.sh <contest_id> [problems]"
    echo "例:     ``./setup_contest.sh abc999``"
    echo "        ./setup_contest.sh abc999 \"a b c d\""
    exit 1
fi

if [ ! -f "$TEMPLATE" ]; then
    echo "Error: テンプレートファイルが見つかりません: $TEMPLATE"
    exit 1
fi

# コンテストが入る百の位フォルダを特定 (abc4xx, abc3xx, etc.)
PREFIX=$(echo "$CONTEST" | sed 's/[0-9]*$//')
NUM=$(echo "$CONTEST" | grep -o '[0-9]*$')
HUNDREDS="${PREFIX}${NUM:0:1}xx"

mkdir -p "$HUNDREDS/$CONTEST"

for p in $PROBLEMS; do
    DIR="$HUNDREDS/$CONTEST/$p"
    mkdir -p "$DIR"
    if [ ! -f "$DIR/main.cpp" ]; then
        cp "$TEMPLATE" "$DIR/main.cpp"
        echo "  ✓ $DIR/main.cpp"
    else
        echo "  - $DIR/main.cpp (already exists)"
    fi
    if [ ! -f "$DIR/input.txt" ]; then
        touch "$DIR/input.txt"
        echo "  ✓ $DIR/input.txt"
    fi
done

echo ""
echo "✅ $CONTEST のセットアップ完了！"
echo "📂 場所: $HUNDREDS/$CONTEST/"
