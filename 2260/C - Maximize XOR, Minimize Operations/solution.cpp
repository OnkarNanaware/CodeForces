#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t ;
    cin >> t;
    while (t--) {
        long long x,y;
        cin >> x >> y;
        long long s=x+y;
        for (int d = (1 << 30); d >= 1; d >>= 1) {
            if ((s & d) && x >= d) {
                x -= d;
            }
            }
 
        cout << s << " " << x << endl;
    }
return 0;
}