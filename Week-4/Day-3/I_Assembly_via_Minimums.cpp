#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int b_size = (n * (n - 1)) / 2;
        vector<ll> b(b_size);
        
        for (int i = 0; i < b_size; ++i) {
            cin >> b[i];
        }
        
        sort(b.begin(), b.end());

        vector<ll> a;
        int index = 0;
        for (int i = 0; i < n - 1; ++i) {
            a.push_back(b[index]);
            index += n - 1 - i;
        }
        
        a.push_back(b.back());
        
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}