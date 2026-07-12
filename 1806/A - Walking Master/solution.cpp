#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int sx,sy,dx,dy;
    cin>>sx>>sy>>dx>>dy;
    if(dy<sy)
    {
        cout<<-1<<endl;
        return;
        
    }
    int moves=dy-sy;
    sx+=moves;
    if(sx<dx)
    {
        cout<<-1<<endl;
        return;
    }
    moves+=sx-dx;
    cout<<moves<<endl;
 
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