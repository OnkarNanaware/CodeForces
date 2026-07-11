#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    int cnt=0;
    int maxVal=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            cnt++;
            maxVal=max(cnt,maxVal);
        }
        else{
            cnt=0;
        }
    }
    cout<<maxVal<<endl;
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