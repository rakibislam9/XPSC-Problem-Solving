#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int a[n];
    long long int maxsum = 0;
    int min_odd = INT_MAX;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        maxsum += a[i];

        if(a[i] % 2 != 0)
        {
            min_odd = min(min_odd, a[i]);
        }
    }
    if(maxsum % 2 == 0)
    {
        cout<<maxsum<<endl;
    }
    else{
        if(min_odd != INT_MAX)
        {
            cout<<maxsum - min_odd<<endl;
        }
        else{
            cout<< 0 <<endl;
        }
    }
    return 0;

}