// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int h, w; cin >> h >> w;
//     vector<string> v(h);
//     int count = 0;
//     vector<bool> b(w); // 上から行で見ていって、.が来たらboolをonにする。onの状態で、次の行で.が来てもカウントは増えない。
//     // カウントが増えるのは、連続した.が終わりつつ（つまりrenが1から0になる）、それらのboolが全てoffであること
//     for (int i = 0; i < h; i++) {
//         cin >> v.at(i);
//     }
//     for (int i = 0; i < h; i++) { // 行
//         int start = -1; // .の連続が始まったインデックスを持つ
//         bool now = false; // 今現在.が1個以上連続しているかを持っておく 
//         for (int j = 0; j < w; j++) { // 列
//             if (v.at(i).at(j) == '.') {
//                 if (now = false) {
//                     start = j;
//                 }
//                 b.at(j) = true;
//             } else {
//                 if (now == true) {
//                     bool ok = true;
//                     for (int k = start; k < j; k++) {
//                         if (b.at(k) == ok) {
//                             ok = false;
//                         }
//                     }
//                     if (ok == true) {
//                         count++;
//                     }
//                 }
//                 start = now;
//                 now = false;
//                 b.at(j) = false;
//             }
//             if (start = true && now = false && )
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
template<class T> using P = pair<T, T>;
int dx[] = { 1,0,-1,0 }; int dy[] = { 0,1,0,-1 };

int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<char>> s(h, vector<char>(w));
	for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> s[i][j];
	int ans = 0;
	vector<vector<bool>> used(h, vector<bool>(w));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (s[i][j] == '#' or used[i][j]) continue;
			queue<P<int>> que;
			que.push({ i,j });
			while (!que.empty()) {
				P<int> p = que.front(); que.pop();
				int x = p.first, y = p.second;
				for (int d = 0; d < 4; d++) {
					int nx = x + dx[d];
					int ny = y + dy[d];
					if (0 <= nx && nx < h && 0 <= ny && ny < w && s[nx][ny] == '.' && !used[nx][ny]) {
						used[nx][ny] = true;
						que.push({ nx,ny });
					}
				}
			}
			ans++;
		}
	}
	cout << ans << endl;
}	
