#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
 
        int maxi = max({a, b, c});
        int mini = min({a, b, c});
        int diff = maxi - mini;
 
        if (diff == 0) {
            cout << 0 << "
";
            continue; // changed from break to continue
        }
 
    int sum = a + b + c;
    int new_maxi = sum - maxi;
    diff = min(diff, (new_maxi - mini));
    cout << diff << "
";
}
 
return 0;
}