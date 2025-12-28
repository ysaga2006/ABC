#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n); rep(i, n) cin >> v.at(i);

    vector<pair<int, int>> pai;
    int count = 1;
    for(int i = 1; i < int(v.size()); i++) {
        if(v.at(i) != v.at(i - 1)) {
            pai.push_back({v.at(i - 1), count});
            count = 0;
        }
        count ++;
    }
    pai.push_back({v.back(), count});

    vector<int> sum(n);

    if (v.size() < 4) {
        cout << v.size() << endl;
    }
    else {
        int ans = v.size();
        rep(i, pai.size()) {
            sum.at(pai.at(i).first) += pai.at(i).second;
        }
        
        cout << ans - 8 << endl;
    }
    
    return 0;
}