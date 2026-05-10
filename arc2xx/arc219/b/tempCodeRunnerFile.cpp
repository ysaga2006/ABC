#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;

    for (ll i = 1; i <= n; ++i) {
      ll p;
      cin >> p;
      if (p == i)
        continue;
      else {
        cout << n * (i - 1) - ((i - 1) * i / 2) << '\n';
        break;
      }
    }
  }
  return 0;
}
