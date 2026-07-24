#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    long long arr(n);
    string s;
    cin>>s;
    long long l_s_l=1;
    long long c_s_l=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            c_s_l++;
        }else{
            l_s_l=max(l_s_l,c_s_l);
            c_s_l=1;
        }
    }
    l_s_l=max(l_s_l,c_s_l);
 
    cout<<l_s_l+1<<endl;
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