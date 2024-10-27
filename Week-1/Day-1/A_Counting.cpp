#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B;
    cin>>A>>B;

    int countLess = 0;

    for(int i=A; i<=B; i++)
    {
        countLess++;
    }
    cout<<countLess<<endl;
    return 0;
}