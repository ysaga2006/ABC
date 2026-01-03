#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long
using namespace std;

int main() {
    int n; cin >> n;
    set<int> st;
    set<int> stt;
    int max = 0;
    rep(i, n) {
        if (i * i > n) {
            max = i;
            break;
        } 
    }
    max--;
    rep(i, max) rep(j, i) {
        int num = ((i + 1) * (i + 1)) + ((j + 1) * (j + 1));
        if (st.count(num) != 0) {
            stt.insert(num);
        }
        if (num <= n) {
            st.insert(num);
        }
    }
    for (auto ele : stt) {
        st.erase(ele);
    }
    cout << st.size() << endl;
    for (auto ele : st) {
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}