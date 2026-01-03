#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long
using namespace std;

int main() {
    int n; cin >> n;
    set<int> st;
    int max = 0;
    rep(i, n) {
        if (i * i > n) {
            max = i;
            break;
        } 
    }
    max--;
    rep(i, max) rep(j, i) {
        if (((i + 1) * (i + 1)) + ((j + 1) * (j + 1)) <= n) {
            st.insert(((i + 1) * (i + 1)) + ((j + 1) * (j + 1)));
        }
    }
    cout << st.size() << endl;
    for (auto num : st) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}