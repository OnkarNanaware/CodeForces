#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    long long a[n];
    int neg=0;
    int pos=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
       
    }
    if (n % 2 == 1) {
        cout << "NO
";
    } else if (sum % 4 == 0) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}