#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        int k = 0; // Initializing to 0 works cleanly since gcd(0, x) = x
        for (int i = 0; i < n; i++)
        {
            k = __gcd(k, abs(a[i] - (i + 1))); // <-- CHANGED HERE
        }
        cout << k << "
";
        }
    return 0;
}