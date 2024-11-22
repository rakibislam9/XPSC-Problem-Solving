#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int sum = 0, ans = -1;
        int l = 0, r = 0;

        while(r < n) {
            sum += a[r];

            if (sum == s) {
                ans = max(ans, r - l + 1);
            }
            while (sum > s) {
                sum -= a[l];
                l++;
            }
            r++;
        }
        

        if (ans == -1) {
            cout << -1 << endl;
        } else {
            cout << n - ans << endl;
        }
    }
    return 0;
}
