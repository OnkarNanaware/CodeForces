#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n; // the even int.
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        cout << i + 1 << " " << i << " ";
    }
    cout <<endl;
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