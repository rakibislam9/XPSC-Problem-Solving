#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--){

        ll a,b,n,s;
        cin >> a >> b >> n >> s;

        ll r = s%n;

        if(r <= b && a*n+b >= s){
            cout << "YES\n" ;
        }else{
            cout << "NO\n" ;
        }
    }
    return 0;
}