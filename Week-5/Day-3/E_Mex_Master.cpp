#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        int count_zero = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            count_zero += a[i];
            
        }

        if (count_zero >= 2) {
            cout << 1 << endl;
        } else if (count_zero == 1) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}
