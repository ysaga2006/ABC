#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l, r; cin >> n >> l >> r;
    int count = 0;
    string s; cin >> s;
    vector<vector<int>> v(26, vector<int>());
    for (int i = 0; i < n; i++) {
        v.at(s[i] - 'a').emplace_back(i);
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < int(v.at(i).size()); j++) {
            for (int k = 0; k < j; k++) {
                int val = v.at(i).at(j) - v.at(i).at(k);
                if (l <= val && val <= r) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
