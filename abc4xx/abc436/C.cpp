#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    set<long long> st;
    set<long long> stt;
    rep(i, m)
    {
        long long pre = st.size();
        long long r, c;
        cin >> r >> c;

        st.insert((n * (r - 1)) + c);
        if (st.size() - pre != 1)
        {
            continue;
        }
        else
        {
            stt.insert((n * (r - 1)) + c);
        }

        pre = st.size();
        st.insert((n * (r - 1)) + c + 1);
        if (st.size() - pre != 1)
        {
            continue;
        }
        else
        {
            stt.insert((n * (r - 1)) + c + 1);
        }

        pre = st.size();
        st.insert((n * r) + c);
        if (st.size() - pre != 1)
        {
            continue;
        }
        else
        {
            stt.insert((n * r) + c);
        }

        pre = st.size();
        st.insert((n * r) + c + 1);
        if (st.size() - pre != 1)
        {
            continue;
        }
        else
        {
            stt.insert((n * r) + c + 1);
        }
    }
    cout << (stt.size() / 4) << endl;
}