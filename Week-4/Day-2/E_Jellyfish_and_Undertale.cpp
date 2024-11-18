#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long a,b,n;
        cin >> a >> b >> n;
        vector<int> acc(n);

        long long sum =0;

        if(b >= a){
            sum = a;
            b=a;
        }else{
            sum=b;
        }

        for(int i=0; i<n; i++)
        {
            cin >> acc[i];

            if(acc[i]+1 <= a){
                sum += acc[i];
            }else{
                sum += a-1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}