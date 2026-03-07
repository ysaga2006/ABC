#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<int> par(10);

int root(int x) {
    if (par.at(x) == x) {
        return x;
    } else {
        return par.at(x) = root(par.at(x));
    }
}

bool same(int x, int y) {
    return root(x) == root(y);
}

void unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return;
    par.at(x) = y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++) par.at(i) = i;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v.at(i);
    }
    for (int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v; u--; v--;
        unite(u, v);
    }
    cout << "No" << '\n';
    for (int i = 1; i < n; i++) {
        set<int> st;
        st.insert(v.at(0));
        int now = i;
        int count = 1;
        do {
            st.insert(v.at(now));
            now = par.at(now);
            count++;
        } while (par.at(now) != 0);
        if (int(st.size()) == count) {
            cout << "No" << '\n';
        } else {
            cout << "Yes" << '\n';
        }
    }
    return 0;
}
