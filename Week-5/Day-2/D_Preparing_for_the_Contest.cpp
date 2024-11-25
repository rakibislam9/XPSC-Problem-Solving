#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> ans;

        for(int i=1; i <= k ; i++){
            ans.push_back(i);
        }

        for(int i=n; i > k ; i--)
        {
            ans.push_back(i);
        }

        for(int num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}