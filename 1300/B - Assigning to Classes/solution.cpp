#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(2*n);
        for (int i = 0; i < 2*n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        // 0-indexed: middle two are a[n-1] and a[n]
        cout <<llabs(a[n] - a[n-1]) << '
';
    }
    return 0;
}