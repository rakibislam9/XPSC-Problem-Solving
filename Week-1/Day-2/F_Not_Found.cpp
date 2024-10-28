#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin>>S;
    set<char> S_letter(S.begin(), S.end());
    char missing_letter = '0';

    for(char i= 'a'; i<= 'z'; i++)
    {
        if(S_letter.find(i) == S_letter.end())
        {
            missing_letter = i;
            break;
        }
    } 
    if(missing_letter == '0')
    {
        cout<<"None"<<endl;
    }else{
        cout<<missing_letter<<endl;
    }
    return 0;
}