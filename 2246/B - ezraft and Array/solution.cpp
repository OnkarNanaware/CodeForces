#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
   long long n;
    cin >> n;
    if (n == 1)
     { 
        
    cout << "1
";
     return;
     }
    if (n == 2) {
         cout << "-1
";
          return;
         }
    if (n == 3) {
         cout << "1 2 3
";
          return;
         }
    cout << "1 2 3";
    long long curr = 6;
    for (int i = 4; i <= n; ++i) {
        cout << " " << curr;
        curr *= 2;
    }
    cout << "
";
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}