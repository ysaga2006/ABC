#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long
using namespace std;

int main() {
    string s; cin >> s;
    // tの位置を把握して、その中から2つ選び、それらのtに挟まれる文字列の充填率を計算、最大値を更新していく。
    // 最悪計算量は、100C2 * 100なので、多分間に合う。
    // 区間内のtの個数をどうやって得ようか。for文でカウントしてみるか。
    vector<int> l;
    double ans = 0;
    rep(i, int(s.size())) {
        if (s[i] == 't') {
            l.push_back(i);
        }
    }
    // rep(i, int(l.size())) cout << l.at(i) << endl;
    rep(i, int(l.size())) rep(j, i) {
        // cout << l.at(i) << " " << l.at(j) << endl;
        if (l.at(i) - l.at(j) >= 3) {
            int count = 0;
            for (int k = l.at(j); k < l.at(i); k++) {
                if (s[k] == 't') {
                    count++;
                }
            }
            // cout << count << endl;
            double f = (count - 2) / (l.at(i) - l.at(j) + 1 - 2);
            // cout << f << endl;
            if (f > ans) {
                ans = f;
            }
        }
    }
        
    cout << ans << endl;
    return 0;
}