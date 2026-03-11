#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    string s; cin >> s;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    vector<ll> l0(n), l1(n), r0(n), r1(n); // 左or右から見ていって同じ数字が来たらcを足す。これをiまでやった時のsum
    if (s[0] == 0) {
        for (int i = 0; i < n; i++) {
            
        }
    }
    return 0;
}
