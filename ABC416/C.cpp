#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, x; cin >> n >> k >> x;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        v.at(i) = s;
    }
    vector<string> dic;
    if (k == 5) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int p = 0; p < n; p++) {
                    for (int l = 0; l < n; l++) {
                        for (int m = 0; m < n; m++) {
                            dic.push_back(v.at(i) + v.at(j) + v.at(p) + v.at(l) + v.at(m));
                        }
                    }
                }
            }
        }
    }
    if (k == 4) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int p = 0; p < n; p++) {
                    for (int l = 0; l < n; l++) {
                        dic.push_back(v.at(i) + v.at(j) + v.at(p) + v.at(l));
                    }
                }
            }
        }
    }
    if (k == 3) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int p = 0; p < n; p++) {
                    dic.push_back(v.at(i) + v.at(j) + v.at(p));
                }
            }
        }
    }
    if (k == 2) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dic.push_back(v.at(i) + v.at(j));
            }
        }
    }
    if (k == 1) {
        for (int i = 0; i < n; i++) {
            dic.push_back(v.at(i));
        }
    }
    sort(dic.begin(), dic.end());
    cout << dic.at(x - 1) << endl;
    return 0;
}