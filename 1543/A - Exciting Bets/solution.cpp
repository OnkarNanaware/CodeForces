#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
int main()
 
{
 
    int t;
 
    cin >> t;
 
    while (t--)
 
    {
 
        ll a, b;
 
        cin >> a >> b;
 
        if (a == b)
 
        cout << 0 << " " << 0 << endl;
 
        else
 
        {
 
            ll max, moves;
 
            ll x, y;
 
            max = abs(a - b);
 
            ll d = a % max;
 
            x = d;
 
            y = max - d;
 
            moves = min(x, y);
 
            cout << max << " " << moves << endl;
 
        }
 
}
 
return 0;
 
}
 