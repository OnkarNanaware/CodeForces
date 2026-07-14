#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;//taking the sttring size;
    string s;
    cin>>s;
    int res=0;
    int i=0;
    int len=0;
    while(i<n)
    {
        if(s[i]=='#')
        {
            len=0;
            while(i<n &&s[i]=='#')
            {
                len++;
                i++;
            }
            res=max(res,(len+1)/2);
        }
        else
        {
            i++;
        }
    }
    cout<<res<<endl;
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