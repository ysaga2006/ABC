#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    const int max = pow(10, 6);
    vector<int> a(n + 1);
    rep(i, n) cin >> a.at(i + 1);
    vector<int> s(max);
    vector<int> st;
    rep(i, n) st.push_back(a.at(i + 1));
    s.at(0) = 0;
    rep(i, max - 1)
    {
        s.at(i + 1) = s.at(i) + st.size();
        remove(st.begin(), st.end(), i);
    }
    rep(i, 5) cout << s.at(i) << endl;
    return 0;
}