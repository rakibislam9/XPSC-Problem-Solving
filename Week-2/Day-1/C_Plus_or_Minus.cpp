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
        int A, B , C;
        cin >> A >> B >>C;

        if(A + B == C)
        {
            cout << "+" <<endl;
        }else if(A - B == C)
        {
            cout << "-" <<endl;
        }
    }
    return 0;
}