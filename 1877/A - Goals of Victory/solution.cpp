#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
        int sum=0;
        vector<int>arr(n);
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
         int x=0;
         x=0-sum;
         cout<<x<<endl;
      }
 
    return 0;
}