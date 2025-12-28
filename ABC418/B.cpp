#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long
using namespace std;

int main() {
    string s; cin >> s;
    // tの位置を把握して、その中から2つ選び、それらのtに挟まれる文字列の充填率を計算、最大値を更新していく。
    // 最悪計算量は、100C2 * 100なので、多分間に合う。
    // 区間内のtの個数をどうやって得ようか。for文でカウントしてみるか。
    int n = s.size();
    vector<int> l(0);
    double ans = 0;
    rep(i, n) {
        if (s[i] == 't') {
            l.push_back(i);
        }
    }
    int m = l.size();
    rep(i, m) rep(j, i) {
        int count = 0;
        for (int k = l.at(i); k < l.at(j); j++) {
            if (s[k] == 't') {
                count++;
            }
        }
        double f = (count - 2) / (l.at(j) - l.at(i) + 1 - 2);
        if (f > ans) {
            ans = f;
        }
    }
    cout << ans << endl;
    return 0;
}