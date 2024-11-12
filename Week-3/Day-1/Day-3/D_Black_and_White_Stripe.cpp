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
        
        int min_recolors = k;
        
        int current_recolors = 0;
        for (int i = 0; i < k; ++i) {
            if (s[i] == 'W') {
                ++current_recolors;
            }
        }
        
        min_recolors = current_recolors;
        
        for (int i = k; i < n; ++i) {
            if (s[i - k] == 'W') {
                --current_recolors;
            }
            if (s[i] == 'W') {
                ++current_recolors;
            }
            
            min_recolors = min(min_recolors, current_recolors);
        }
        
        cout << min_recolors << endl;
    }

    return 0;
}
