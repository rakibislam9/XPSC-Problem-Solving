#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x)
                v.push_back(x);
            sum += abs(x);
        }
        n = v.size();
        int l = 0, r = 0, count = 0;
        for (int i = 0; i < n; i++)
        {

            if (v[i] < 0)
            {
                count++;
                while (i < n && v[i] < 0)
                    i++;
            }
            else
            {
                while (i < n && v[i] > 0)
                    i++;
            }
        }
        cout << sum << " " << count << endl;
    }
    
    return 0;
}