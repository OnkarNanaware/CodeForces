#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long x, y, k;
    cin >> x >> y >> k;
 
    long long res = 0;
 
   // for (long long i = 0; i < k; i++) {
 
     long long d=y-x;
     long long ans=0;
     long long cnt=max(0LL, min(k, d - x + 1)); //for some month d is less
     for(int i=0;i<cnt;i++)
     {
         ans+=d%(x+i);
     }
     ans+=(k-cnt)*d;
    
//         // ceil(tp / ne)
//         long long eachget = (tp + ne - 1) / ne;
 
//         long long rem = tp - eachget * ne;
 
//         res += rem;
//    // }
 
    cout << ans << '
';
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