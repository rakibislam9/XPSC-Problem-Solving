#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B,C;
    cin>>A>>B>>C;

    bool flag = false;

    for(int i=A; i<=B; i++)
    {
        if(i%C == 0)
        {
            cout<<i<<endl;
            flag = true;
            break;
        }
    }
    if(!flag)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}