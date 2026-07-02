#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        string x, s;
        cin >> x >> s;
 
        int ans = 0;
 
        // Keep doubling until length >= m
        while (x.size() < s.size()) {
            if (x.find(s) != string::npos) {
                break;
            }
            x += x;
            ans++;
        }
 
        // Check after reaching required length
        if (x.find(s) != string::npos) {
            cout << ans << '
';
            continue;
        }
 
        // One extra doubling for boundary overlap
        x += x;
        ans++;
 
        if (x.find(s) != string::npos)
            cout << ans << '
';
        else
            cout << -1 << '
';
    }
 
    return 0;
}