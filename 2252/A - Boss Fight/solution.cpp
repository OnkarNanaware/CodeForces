#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    map<int,int> freq;
    int maxf=0,maxv=0;
    int sum=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        
        freq[a[i]]++;
        if(freq[a[i]]>maxf){
            maxf=freq[a[i]];
            maxv=a[i];
        }
    }
    int other=n-maxf;
    if(maxf<=other+2){
        cout<<sum<<endl;
        return;
 
    }
 
    int extra=maxf-other-1;
    cout<<sum-1LL*(maxf-(other+2))*maxv<<endl;
 
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