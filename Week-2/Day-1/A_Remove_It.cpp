#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    
    vector<int> number;
    for(int i=0; i<n; i++)
    {
        int m;
        cin >> m;
        number.push_back(m);
        

    }

    for(int value : number)
    {
        if(value != x)
        {
            number.clear();
            cout << value << " ";
        }
    }
    return 0;
}