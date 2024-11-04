#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>> n;

        string S, T;
        cin >> S >> T;

        bool flag = true;
        
        for(int i=0; i<n; i++)
        {
           if(S[i] == 'G')
                S[i] = 'B';
           
           if(T[i] == 'G')
                T[i] = 'B';
           
           if(S[i] != T[i])
            {
                flag = false;
            }
        }
        
        if(flag)
        {
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;

        }
    }
    return 0;
}