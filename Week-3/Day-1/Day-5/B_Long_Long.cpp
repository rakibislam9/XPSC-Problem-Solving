#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        long long sum = 0;
        int opration = 0;
        bool negetisum = false;

        for(int i=0; i < n; i++)
        {
            sum += abs(a[i]);
            if(a[i] < 0){
                if(!negetisum){
                    opration++;
                    negetisum = true;
                }else{
                    negetisum = false;
                }
            }
        }
        cout << sum << " " << opration << endl;
    }
    return 0;
}