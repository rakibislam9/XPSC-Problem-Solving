#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){

        int n,cost;
        cin >> n >> cost;

        vector<int> A(n);
        for(int i=0; i<n; i++){
            cin >> A[i];
            A[i] += (i+1);
        }

        sort(A.begin(), A.end());
        int ans = 0;
        long long sum = 0;

        for(int i=0; i<n; i++){
            if(sum + A[i] > cost)
                break;
                sum += A[i];
                ans++;
            
        }
        cout << ans << endl;
    }
    return 0;
}