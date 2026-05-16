#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;
  ll n; cin >> n;

  for (ll i = n; i <= ll(s.size()) - n - 1; ++i) {
    cout << s[i];
  }

  cout << '\n';
  return 0;
}
