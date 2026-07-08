#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    int sum=0;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }
    if(sum%2==0)
    {
        cout<<"YES"<<endl;
    }
    else{
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