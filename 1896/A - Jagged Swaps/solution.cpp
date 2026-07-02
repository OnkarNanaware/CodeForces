//stupid problem this is 
#include<iostream>
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
       if(arr[0]==1)
       {
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}