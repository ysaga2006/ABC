#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    int N, answer = 0;
    cin >> N;
    vector<int> v(N);
    set<int> s;
    for (int i = 0; i < N; i++) {
        cin >> v.at(i);
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i - 1; j++) {
            if (v.at(i) == v.at(j)) {
                s.insert(v.at(i));
            }
        }
    }
    for (int elem : s) {
        int total = 0;
        for (int i = 0; i < N; i++) {
            if (elem == v.at(i)) {
                total += 1;
            }
        }
        answer += (total * (total - 1) / 2) * (N - total);
    }
    cout << answer << endl;
    return 0;
}