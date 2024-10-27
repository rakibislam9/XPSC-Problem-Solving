#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B,T;
    cin>>A>>B>>T;

    int totalbiscut = 0;

    for(int i=1; i * A <= T; i++)
    {
        totalbiscut += B;
    }
    cout<<totalbiscut<<endl;
    return 0;
}