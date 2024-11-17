#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){

        int x,y;
        cin >> x >> y;

        int win = 3;

        int drwo = x % win;
        int loss = y % win;

        if(drwo == loss)
        {
            cout << drwo << endl;
        }
    }
    return 0;
}