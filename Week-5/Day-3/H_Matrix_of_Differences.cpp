#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n=1, m=0;
        cin >> n;

        int i=1, j=n*n;
        vector<int> v;
        while(i <= j){
            v.push_back(i++);
            if(j >= i)
                v.push_back(j--);
        }
        for(int i=0; i<n; i++){
            for(j=0; j<n; j++){
                cout << v[i*n+j] << " ";
            }
            cout << endl;
            i++;
            if(i<n){
                for(int j=0; j<n; j++){
                    cout << v[(i+1)*n-j-1] << " ";
                }
                cout << endl;
            }
        }
        
    }
    return 0;
}