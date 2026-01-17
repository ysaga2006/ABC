#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m; cin >> n >> m;
    vector<ll> v(n + 1);
    for (;m--;) {
        ll a, b; cin >> a >> b;
        v.at(a)++;
        v.at(b)++;
    }
    bool ok = true;
    for (ll i = 1; i < n + 1; i++) {
        if (v.at(i) != 2) {
            ok = false;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}