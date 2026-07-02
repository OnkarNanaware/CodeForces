//stupid problem this is 
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#include<vector>
int main()
{
    int tc;
    cin>>tc;
  
    while(tc--)
    {
        int n;
        cin>>n;
          vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];//taking all the elements input
        }
      
        map<long long,long long> freq_map;
        for(int i=0;i<n;i++)
        {
            freq_map[arr[i]]++;
        }
 
        if(freq_map.size()>=3)
        {
            cout<<"No"<<endl;
            continue;
        }
        long long freq1=freq_map.begin()->second;
        long long freq2=freq_map.rbegin()->second;
        if(freq1==freq2)
        {
            cout<<"Yes"<<endl;
        }else if(n%2==1&& abs(freq1-freq2)==1)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}