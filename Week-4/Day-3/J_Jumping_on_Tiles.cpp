#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        string s;
        cin >> s; 
        int n = s.size();

        map<char, vector<int>> char_map;
        for (int i = 0; i < n; ++i) {
            char_map[s[i]].push_back(i + 1);
        }

        char start = s[0], end = s[n - 1];
        int cost = abs(start - end);

        vector<int> path;
        if (start <= end) {
            for (char c = start; c <= end; ++c) {
                if (char_map.count(c)) {
                    for (int index : char_map[c]) {
                        path.push_back(index);
                    }
                }
            }
        } else {
            for (char c = start; c >= end; --c) {
                if (char_map.count(c)) {
                    for (int index : char_map[c]) {
                        path.push_back(index);
                    }
                }
            }
        }

        cout << cost << " " << path.size() << endl;
        for (int index : path) {
            cout << index << " ";
        }
        cout << endl;
    }

    return 0;
}
