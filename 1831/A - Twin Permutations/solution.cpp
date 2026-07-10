#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<n+1-arr[i]<<" ";
       
    }
    cout<<endl;
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
//the time complexity will be n^2
//n is for each teatcases we have given 1 second of the time then 10^8 operations
//testcase/operations will be 10^8/2000 it will be around the 5*10^4 opearation allowed here 
//now  n is here 100 o(n^3) will goes to 10^6 operations so o(n^2 will suits well )