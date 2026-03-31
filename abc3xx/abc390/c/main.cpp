#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w; cin >> h >> w;
    int up = 1000, down = -1, left = 1001, right = -1;

    vector<string> v(h); 
    for (int i = 0; i < h; i++) cin >> v[i];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (v[i][j] == '#') {
                up = min(up, i);
                down = max(down, i);
                left = min(left, j);
                right = max(right, j);
            }
        }
    }

    bool ans = true;

    for (int i = up; i <= down; i++) {
        for (int j = left; j <= right; j++) {
            if (v[i][j] == '.') {
                ans = false;
            }
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
