#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, string> latestHandle; 
    map<string, string> originalHandle; 
    
    vector<pair<string, string>> order; 

    for (int i = 0; i < n; i++) {
        string oldHandle, newHandle;
        cin >> oldHandle >> newHandle;

        if (originalHandle.find(oldHandle) != originalHandle.end()) {
            oldHandle = originalHandle[oldHandle]; 
        } else {
            latestHandle[oldHandle] = oldHandle; 
            order.push_back({oldHandle, oldHandle}); 
        }

        latestHandle[oldHandle] = newHandle;

        originalHandle[newHandle] = oldHandle; 
    }

    vector<pair<string, string>> results;
    
    bool hasPetya = false;
    for (auto name : order) {
        if (latestHandle.find(name.first) != latestHandle.end()) {
            if (name.first == "Petya") {
                hasPetya = true; 
            } else {
                results.push_back({name.first, latestHandle[name.first]});
            }
        }
    }

    if (hasPetya) {
        results.insert(results.begin(), {"Petya", latestHandle["Petya"]});
    }

    cout << results.size() << endl;
    for (auto result : results) {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
