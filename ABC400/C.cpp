#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll div2 = sqrt(n / 2) / 1;
    ll div4 = sqrt(n / 4) / 1;
    cout << div2 + div4 << endl; 
    return 0;
}