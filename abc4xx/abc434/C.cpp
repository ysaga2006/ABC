#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
    int tc;
    cin >> tc;
    rep(i, tc) {
        int n, h;
        int count = 0;
        cin >> n >> h;
        vector<int> t(n + 1);
        vector<int> l(n + 1);
        vector<int> u(n + 1);
        t.at(0) = 0;
        l.at(0) = h;
        u.at(0) = h;
        rep(i, n) cin >> t.at(i + 1) >> l.at(i + 1) >> u.at(i + 1);
        int ma = h, mi = h;
        rep(i, n) {
            if (((l.at(i + 1) - ma >= 0) && (l.at(i + 1) - ma <= (t.at(i + 1) - t.at(i)))) || ((mi - u.at(i + 1) >= 0) && (mi - u.at(i + 1) <= (t.at(i + 1) - t.at(i))))) {
                count ++;
                ma = min(ma + (t.at(i + 1) - t.at(i)), u.at(i + 1));
                mi = max(mi - (t.at(i + 1) - t.at(i)), l.at(i + 1));
            }
            else {
                break;
            }
        }
        if (count == n) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}