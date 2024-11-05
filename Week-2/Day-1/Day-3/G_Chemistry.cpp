#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        int odd_count = 0;
        for (auto [ch, count] : freq) {
            if (count % 2 != 0) {
                odd_count++;
            }
        }

        if (odd_count - k <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
