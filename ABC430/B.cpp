#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <set>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v.at(i);
    }
    set<vector<string>>grid_set;
    for (int i = 0; i < n - m + 1; i++)
    {
        vector<int> v2(m);
        for (int j = 0; j < m; j++)
        {
            v.at(j);
        }
    }

    return 0;
}