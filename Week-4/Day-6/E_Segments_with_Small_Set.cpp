#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> cnt; 
    int l = 0, r = 0, ans = 0;
    long long result = 0;

    while(r<n) { 
        cnt[a[r]]++;
        if (cnt[a[r]] == 1) {
            ans++; 
        }
          
            while (ans > k) { 
            cnt[a[l]]--;
            if (cnt[a[l]] == 0) {
                ans--; 
            }
            l++;
        }
        result += (r - l + 1); 
        r++;
        
    }
    
    cout << result << endl;
    return 0;
}
