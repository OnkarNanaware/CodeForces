#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t ;
   cin >> t;
    while (t--) {
        
        int n;
        cin>>n;
        long long a[n];
        int c0=0;
        int c1=0;
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        if(a[i]==0)
        {
            c0++;
        }
        if(a[i]==1)
        {
            c1++;
        }      
        }
        long long  res=c1*pow(2,c0);
        cout<<res<<endl;
        
        
    }
    return 0;
}