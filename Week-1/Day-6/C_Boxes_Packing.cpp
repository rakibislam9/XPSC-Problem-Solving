#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n; 
    vector<int> box(n);
    map<int, int> boxCount;

    for (int i = 0; i < n; i++) {
        cin >> box[i];
        boxCount[box[i]]++;
    }

    int uniqueSizes = boxCount.size();

    int maxFrequency = 0;
    for ( auto pair : boxCount) {
        maxFrequency = max(maxFrequency, pair.second);
    }

    cout << min(uniqueSizes, maxFrequency) << endl;

    return 0;
}
