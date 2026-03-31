#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    stack<char> st;
    for (int i = 0; i < int(s.size()); i++) {
        if (st.empty()) st.push(s[i]);
        else if ((st.top() == '(' && s[i] == ')') || (st.top() == '[' && s[i] == ']') || (st.top() == '<' && s[i] == '>')) st.pop();
        else st.push(s[i]);
    }
    cout << (st.empty() ? "Yes" : "No") << '\n';
    return 0;
}
