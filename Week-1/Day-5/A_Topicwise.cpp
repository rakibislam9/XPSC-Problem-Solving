#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n, P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;

    vector<pair<int, int>> periods(n);
    for (int i = 0; i < n; ++i) {
        cin >> periods[i].first >> periods[i].second;
    }

    int totalPower = 0;
    int lastActiveTime = 0;

    for (int i = 0; i < n; ++i) {
        
        if (i > 0) {
            int activeStart = periods[i - 1].second;
            int activeEnd = periods[i].first;

            for (int j = activeStart; j < activeEnd; ++j) {
                int activeTime = j - lastActiveTime;

                if (activeTime < T1) {
                    totalPower += P1; 
                } else if (activeTime < T1 + T2) {
                    totalPower += P2; 
                } else {
                    totalPower += P3;
                }
            }
        }

        for (int j = periods[i].first; j < periods[i].second; ++j) {
            totalPower += P1; 
        }

        lastActiveTime = periods[i].second; 
    }

    cout << totalPower << endl;
    return 0;
}
