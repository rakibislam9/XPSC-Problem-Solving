#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        string s;
        cin >> s;
        int l = 0, r = 0;
        long long sum = 0;

        if(s[l] == 'R') cout << 0 << endl;
            
                if( s[r] == 'L' && s[r+1] == 'R'){
                    sum += v[l];
                    r++;
                }
        cout << sum << endl;
    }
    return 0;
}