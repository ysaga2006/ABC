#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); ++i)
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    queue<pair<ll, ll>> qu; //{個数、数字}
    ll q; 
    cin >> q;
    for (ll i = 0; i < q; i++) {
        ll n;
        cin >> n;
        if (n == 1) {
            ll c, x;
            cin >> c >> x;
            qu.push({c, x});
        } else {
            ll k;
            cin >> k;
            if (qu.front().first >= k) {
                cout << k * qu.front().second << endl;
                qu.front().first -= k;
            } else {
                ll cnt = 0, sum = 0;
                while (cnt < k) {
                    cnt += qu.front().first;
                    if (cnt > k) {
                        sum -= qu() * (k - qu.front().first);
                    } else {
                        sum += qu.front().first * qu.front().second;
                    }
                    qu.pop();
                }
            }
        }
    }
    return 0;
}