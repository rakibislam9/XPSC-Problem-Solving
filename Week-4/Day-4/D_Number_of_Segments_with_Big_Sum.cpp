#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, s;
    cin >> n >> s;

    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }

    long long l=0, r= 0, ans=0;
    long long sum = 0;

    while(r < n){
        sum += A[r];

        while(sum >= s){
            ans += n - r;
            sum -= A[l];
            l++;
        }
        r++;

    }
    cout << ans <<endl;
    return 0;
}