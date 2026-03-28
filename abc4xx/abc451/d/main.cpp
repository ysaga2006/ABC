#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector beki(10, vector<ll>()); // i桁の冪乗の数をもつ
    ll num = 1;
    for (int i = 0; i < 10; i++) {
        while (num < pow(10, i)) {
            beki.at(i).push_back(num);
            num *= 2;
        }
    }
    
    return 0;
}

    // for (int i = 0; i < 10; i++) {
    //     for (int j = 0; j < int(beki.at(i).size()); j++) {
    //         cout << beki.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }