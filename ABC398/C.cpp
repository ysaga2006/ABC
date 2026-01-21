#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i < n + 1; i++) {
        int a; cin >> a;
        v.at(i) = a;
    }
    set<int> st;
    set<int> dup;
    for (int i = 1; i < n + 1; i++) {
        if (st.contains(v.at(i))) {
            st.insert(v.at(i));
            dup.insert(v.at(i));
        } else {
            st.insert(v.at(i));
        }
    }
    set<int> ans;
    for (auto ele : st) {
        if (!dup.contains(ele)) {
            ans.insert(ele);
        }
    }
    if (int(ans.size()) == 0) {
        cout << -1 << endl;
    } else {
        int big = *prev(ans.end());
        for (int i = 1; i < n + 1; i++) {
            if (v.at(i) == big) {
                cout << i << endl;
            }
        }
    }
    return 0;
}