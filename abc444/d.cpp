#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
}
    // int n; cin >> n;
    // vector<int> w(2 * 100000 + 1);
    // int max = 0;
    // for (int i = 0; i < n; i++) {
    //     int a; cin >> a;
    //     w.at(i) = a;
    //     if (max < a) max = a;
    // }
    // vector<int> v(max + 5);
    // for (int i = 0; i < n; i++) {
    //     int a; cin >> a;
    //     v.at(0) += 1;
    //     v.at(w.at(i)) -= 1; 
    // }
    // for (int i = 1; i < max + 2; i++) {
    //     v.at(i) += v.at(i - 1);
    // }
    // for (int i = 0; i < max + 2; i++) {
    //     if(v.at(i) >= 10) {
    //         v.at(i + 1) += v.at(i) / 10;
    //         v.at(i) = v.at(i) % 10;
    //     }
    // }
    // for (int i = 0; i < 5; i++) {
    //     if (v.at(max + 4 - i) == 0) {
    //         erase(v.end() - 1);
    //     }
    // }
    // if (v.at(max + 1) >= 1) {
    //     for (int i = 0; i < max + 1; i++) {
    //         cout << v.at(max + 1 - i);
    //     }
    //     cout << endl;
    // } else {
    //     for (int i = 0; i < max; i++) {
    //         cout << v.at(max - i);
    // }
    //     cout << endl;
    // }
    // return 0;