#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X, Y, Z;
    cin >> X >> Y >> Z;

    int currentPoints = X * 2 + Y; 
    
    int remainingGames = 4 - (X + Y + Z);
    
    int maxPoints = currentPoints + remainingGames * 2;

    if (maxPoints > 4) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
