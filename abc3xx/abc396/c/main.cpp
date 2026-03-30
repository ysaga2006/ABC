#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<int> b;
    vector<int> w;
    int cnt = 0; // 正の価値をもつblackの数。
    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        b.emplace_back(val);
        if (val > 0) cnt++;
    }
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < m; i++) {
        int val; cin >> val;
        if (val > 0) { // whiteについては少なくて良いので、マイナスの価値は消す。
            w.emplace_back(val);
        }
    }
    sort(w.rbegin(), w.rend());
    for (int i = 0; i < int(b.size() - 1); i++) {
        b[i + 1] += b[i];
    }
    for (int i = 0; i < int(w.size() - 1); i++) {
        w[i + 1] += w[i];
    }
    // white 0, black 正全部
    // white i, black max(i, 正全部) をi = 0; i < w.size()までやる。最大値を更新していく。
    int ans = -1;
    for (int i = 0; i < int(w.size()); i++) {
        ans = max(ans, w[i] + b[max(i, cnt)]);
    }
    cout << ans << endl;
    return 0;
}
