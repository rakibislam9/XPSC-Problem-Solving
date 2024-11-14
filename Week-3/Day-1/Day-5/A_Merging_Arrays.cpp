#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    a.insert(a.end(), b.begin(), b.end());

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    return 0;
}