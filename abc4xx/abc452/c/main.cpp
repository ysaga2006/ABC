#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (int i = 0; i < n; ++i) {
        int A, B; cin >> A >> B;
        a[i] = A; b[i] = B;
        b[i]--;
    }

    ll m; cin >> m;
    vector<string> sekidui(m);
    vector s(12, vector<string>{}); // 文字数ごとにもつ
    for (int i = 0; i < m; ++i) {
        string S; cin >> S;
        sekidui[i] = S;
        s[S.size()].push_back(S);
    }

    for (int i = 0; i < m; ++i) { // 脊髄
        if (ll(sekidui[i].size()) == n) {
            ll cnt = 0;
            bool ok;
            for (int j = 0; j < n; ++j) { // 肋骨、たて
                for (auto ele : s[a[j]]) {
                    if (ele[b[j]] == sekidui[i][j]) {
                        cnt++; break;
                    }
                }
            }
            ok = (cnt == n);
            cout << (ok ? "Yes" : "No") << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
    return 0;
}
