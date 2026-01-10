#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q; cin >> n >> q;
    vector<int> v(n + 1);
    for (;q--;) {
        int x; cin >> x;
        if (x > 0) {
            v.at(x)++;
            cout << x << endl;
        } else {
            
        }
    }
    return 0;
}