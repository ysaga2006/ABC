#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w; cin >> h >> w;
    vector<string> v(h);
    for (int i = 0; i < h; i++) {
        string s; cin >> s;
        v.at(i) = s;
    }
    return 0;
}
