#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B;
    cin>>A>>B;

    int X = 0;
    if(A>B)
    {
        X = (A+A) -1;
    }else if(A<B){
        X = (B+B) -1;
    }else{
        X = A+B;
    }
    cout<<X<<endl;
    return 0;
}