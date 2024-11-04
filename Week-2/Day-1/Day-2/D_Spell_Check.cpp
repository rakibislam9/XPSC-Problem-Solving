#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;

        string S;
        cin >> S;
        
        
        set<char> speling = {'T', 'i', 'm', 'u', 'r'};
        set<char> Chars;

        for (char c : S) {
            Chars.insert(c);
        }
        if(Chars != speling)
        {
            cout << "NO" <<endl;
        }
        else if(S.length() != 5)
        {
            cout << "NO" <<endl;
        }
        else{
            cout << "YES" <<endl;
        }
        
    }
    return 0;
}