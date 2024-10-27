#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    int sereja = 0;
    int dima = 0;
    int left = 0;
    int right = n-1;
    bool isMaxcard = true;

    while(left <= right)
    {
        if(A[left] > A[right])
        {
            if(isMaxcard)
            {
                sereja += A[left];
            }else{
                dima += A[left];
            }
            left++;
        }
        else{
            if(isMaxcard)
            {
                sereja += A[right];
            }else{
                dima += A[right];
            }
            right--;
        }
        isMaxcard = !isMaxcard;
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}