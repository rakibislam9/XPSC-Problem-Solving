#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        
        vector<int> digits(n);
        for (int i = 0; i < n; ++i) {
            cin >> digits[i]; 
        }

        vector<int> original_digits(n);
        for (int i = 0; i < n; ++i) {
            int bi;
            string moves;
            cin >> bi >> moves; 
            
            int up_moves = 0;
            int down_moves = 0;

            for (char move : moves) {
                if (move == 'U') {
                    up_moves++;
                } else if (move == 'D') {
                    down_moves++;
                }
            }

            int net_moves = up_moves - down_moves;

            int original_digit = (digits[i] - net_moves + 10) % 10;
            original_digits[i] = original_digit; 
        }

        for (int i = 0; i < n; ++i) {
            cout << original_digits[i];
            if (i < n - 1) {
                cout << ' '; 
            } else {
                cout << '\n'; 
            }
        }
    }

    return 0;
}
