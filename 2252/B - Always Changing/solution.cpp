#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
   int c0=0;
   int c1=0;
     for(int i=0;i<n;i++)
     {
         if(s[i]=='0')
         {
             c0++;
         }
         else
         {
                c1++;
         }
     }
 
     if(max(c0,c1)-min(c0,c1)>2)
     {
         cout<<"-1"<<endl;
         return;
     }
     int zr=0,on=0;
     for(int i=0;i<n-1;i++)
     {
        if(s[i]==s[i+1]&&s[i]=='0')
        {
            zr++;
        }
        else if(s[i]==s[i+1]&&s[i]=='1')
        {
            on++;
        }
     }
        if(zr==on)
        {
            cout<<2*zr<<endl;
 
        }
        else
        {
            cout<<2*max(zr,on)-1<<endl;
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