#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;
    cin >> x >> y;

    int qualifies = 18;

    int win = x - y;

    if(win >= qualifies){
        cout << "RCB" << endl;
    }else{
        cout << "CSK" << endl;
    }
    return 0;
}