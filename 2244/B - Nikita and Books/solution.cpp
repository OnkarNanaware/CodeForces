#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long needed=1;
    for(int left=0;left<n;left++)
    {
     if(arr[left]<needed)
     {
        cout<<"NO"<<endl;
        return;
 
     }
     if(left+1<n)
     {
        arr[left+1]+=(arr[left]-needed);
     }
     needed++;
    }
    cout<<"YES"<<endl;
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