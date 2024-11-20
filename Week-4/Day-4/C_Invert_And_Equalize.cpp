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

        string s;
        cin >> s;

        int zero = 0, one = 0;

        // if(n==1)  
        //     cout << 0 <<endl;
        // else{
            for(int i=0; i< n-1; i++){
            
                if(s[i] == '1' && s[i+1] == '0')
                    zero++;
            }
            for(int i=0; i< n-1; i++){
            
                if(s[i] == '0' && s[i+1] == '1')
                    one++;
            }
        // }
        int mx = max(one, zero);

        cout << mx << endl;

        
    }
    return 0;
}