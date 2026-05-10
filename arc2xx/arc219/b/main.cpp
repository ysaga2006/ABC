#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  ll t; cin >> t;
  while (t--) {
    ll ans = 0;
    ll n; cin >> n;
    
    vector<string> s(n);
    for (ll i = 0; i < n; ++i) cin >> s[i];

    cout << ans << '\n';
  }
  return 0;
}
