#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    
    long long k;
    cin>>k;
    int count=0;
    bool done=false;
    // vector<int>arr(k);
    for(int i=0;i<k;i++)
    {
        // cin>>arr[i];
        long long x;
        cin>>x;
        if(x>=3)
        {
            done=true;
        }
        if(x>=2)
        {
            count++;
        }
    }
    if(done ||count>=2)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
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