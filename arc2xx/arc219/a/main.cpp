#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  ll n, m; cin >> n >> m;
  
  vector<string> s(n);
  for (ll i = 0; i < n; ++i) cin >> s[i];

  vector<bool> visited(n, false);

  string t;

  for (ll i = 0; i < m; ++i) {
    ll zero = 0, one = 0;
    for (ll j = 0; j < n; ++j) {
      if (visited[j] == true) continue;
      if (s[j][i] == '0') zero++;
      else one++;
    }
      if (zero < one) {
        t += '1';
        for (ll j = 0; j < n; ++j) {
          if (visited[j] == true) continue;
          if (s[j][i] == '1') visited[j] = true;
        }
      }
      else {
        t += '0';
        for (ll j = 0; j < n; ++j) {
          if (visited[j] == true) continue;
          if (s[j][i] == '0') visited[j] = true;
        }
      }
  }

  cout << t << '\n';
  return 0;
}
