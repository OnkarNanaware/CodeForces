#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v;
        for (int i = 1; i <= n; i++)
            v.push_back(i);
        
        vector<pair<int, int>> ans;
        
        for (int i = n - 1; i >= 1; i--) {
            ans.push_back({v[i - 1], v[i]});
            v[i - 1] = (v[i - 1] + v[i] + 1) / 2;
        }
        
        cout << v[0] << "
";
        for (auto p : ans)
            cout << p.first << " " << p.second << "
";
    }
    return 0;
}