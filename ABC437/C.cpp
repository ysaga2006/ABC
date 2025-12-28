#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    rep(ti, t)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> vp(n + 2);
        vector<pair<ll, ll>> vw(n + 2);
        rep(i, n)
        {
            ll w, p;
            cin >> w >> p;
            vp.at(i) = make_pair(p, w);
            vw.at(i) = make_pair(w, p);
        }
        sort(vp.begin(), vp.end());
        sort(vw.begin(), vw.end());
        reverse(vp.begin(), vp.end());

        vector<ll> sup(n + 2);
        rep(i, n) { sup.at(i) = vp.at(i).first; }
        rep(i, n) { sup.at(i + 1) += sup.at(i); }
        vector<ll> suw(n + 2);
        rep(i, n) { suw.at(i) = vp.at(i).second; }
        rep(i, n) { suw.at(i + 1) += suw.at(i); }
        ll stans = n - 1;
        while (sup.at(stans) > suw.at(n) - suw.at(stans))
        {
            stans--;
        }

        vector<ll> supp(n + 2);
        rep(i, n) { supp.at(i) = vw.at(i).first; }
        rep(i, n) { supp.at(i + 1) += supp.at(i); }
        vector<ll> suww(n + 2);
        rep(i, n) { suww.at(i) = vw.at(i).second; }
        rep(i, n) { suww.at(i + 1) += suww.at(i); }
        ll ndans = 0;
        while (suww.at(ndans) < supp.at(n) - supp.at(ndans))
        {
            ndans++;
        }

        cout << min(stans, ndans) << endl;
    }
    return 0;
}