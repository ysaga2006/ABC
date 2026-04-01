#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll ans = 0;
    vector<ll> v(n); for (int i = 0; i < n; ++i) cin >> v[i];
    for (int i = 0; i < n; i++) {
        ll ok = 0;
        while (v[ok] * 2 <= v[i]) {ok++; ans++;}
    }
    cout << ans << '\n';
    return 0;
}
