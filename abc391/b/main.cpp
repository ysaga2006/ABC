#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<string> s(n);
    vector<string> t(m);
    for (int i = 0; i < n; i++) {
        string w; cin >> w;
        s.at(i) = w;
    }
    for (int i = 0; i < m; i++) {
        string w; cin >> w;
        t.at(i) = w;
    }
    for (int i = 0; i < n - m; i++) {
        for (int j = 0; j < n - m; j++) {
        }
    }
    return 0;
}
