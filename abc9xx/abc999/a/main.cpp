// bit全探索の実装

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, w; cin >> n >> w;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i) cin >> v[i];

    auto pattern = [&](ll bit, ll n) {
        vector<ll> S;
        for (ll i = 0; i < n; ++i) {
            if (bit & (1 << i)) {
                S.push_back(i);
            }
        }
        return S;
    };

    for (ll bit = 0; bit < (1 << n); ++bit) {
        ll sum = 0;
        vector<ll> s;
        s = pattern(bit, n);
        for (auto ele : s) {
            sum += v[ele];
        }
        if (sum == w) {
            cout << "Yes" << '\n';
            return 0;
        }
    }
    cout << "No" << '\n';
    return 0;
}
