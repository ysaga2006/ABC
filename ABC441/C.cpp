#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k, x; cin >> n >> k >> x;
    vector<ll> v(n + 1);
    for (ll i = 0; i < n; i++) {
        ll a; cin >> a;
        v.at(i) = a;
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        if (sum < x) {
            sum += v.at(i);
        } else {
            cout << i + 1 + (n - k)  << endl;
            break;
        }
    }
    if (sum < x) {
        cout << "-1" << endl;
    }
    return 0;
}