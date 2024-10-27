#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin>>n;

    
    while(n.length() < 4)
    {
        n = '0' + n;
    }
    cout<<n<<endl;
    return 0;
}