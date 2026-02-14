#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
    int n, s;
    int count = 0;
    cin >> n >> s;
    vector<int> vec(n + 1);
    rep(i, n) {
        cin >> vec.at(i);
    }
    vec.at(n + 1) = vec.at(n);
    rep(i, n) if (vec.at(i + 1) - vec.at(i) < s + 1) {
        count ++;
    }
    if (count == n) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}