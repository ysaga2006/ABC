#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> os(n);
    rep(i, n) os.at(i) = i + 1;
    rep(i, q) {
        int x, y;
        cin >> x >> y;
        sort(os.begin(), os.end());
        fill(os.begin(), lower_bound(os.begin(), os.end(), x + 1) - 1, y);
        auto it  = lower_bound(os.begin(), os.end(), x + 1) - 1;
        cout << distance(os.begin(), it) << endl;;
    }
    return 0;
}