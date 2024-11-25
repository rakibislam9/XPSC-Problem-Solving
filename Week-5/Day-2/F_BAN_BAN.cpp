#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(n == 1){
            cout << 1 << endl;
            cout << 1 << " " << 2 << endl;
        }else{
            cout << n-1 << endl;
            int x = 1;
            for(int i=1; i<= n/2; i++){
                cout << x+1 << " " << 3 * (i + 1) << endl;
                x++;
                if(x == 3)
                    x++;
            }
        }
    }
    return 0;
}