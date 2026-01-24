#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const double INF = 100100100;
    ll n, q; cin >> n >> q;
    vector<double> vup;
    vector<double> vdo;
    vector<double> v(n);
    for (ll i = 0; i < n; i++) {
        double x, y; cin >> x >> y;
        if (x > 0 && y >= 0) {
            v.at(i) = 1;
        }
        if (x < 0 && y >= 0) {
            v.at(i) = 2;
        }
        if (x > 0 && y < 0) {
            v.at(i) = 4;
        }
        if (x < 0 && y < 0) {
            v.at(i) = 3;
        }
        if (x == 0) {
            vup.emplace_back(INF);
        }
        else if (x > 0) {
            vup.emplace_back(y / x);
        }
        else if (x < 0) {
            vdo.emplace_back(y / x);
        }
    }
    sort(vup.begin(), vup.end());
    sort(vdo.begin(), vdo.end());
    for (;q--;) {
        ll a, b; cin >> a >> b;
        a--; b--;
        if (v.at(a) == 1 && v.at(b) == 1) {
            
        }
    }
    return 0;
}