#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n);
    set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> v.at(i);
    }
    int now = v.at(0);
    for (int i = 0; i < n; i++) {
        for (auto ele : st) {
            if (v.at(i + 1) == ele + 1) {
                st.insert(ele + 1);
                st.erase(ele);
            }
        }
    }
    return 0;
}
