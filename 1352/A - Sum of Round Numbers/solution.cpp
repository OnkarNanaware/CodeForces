#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
using namespace std;
 
int main() {
    int t;
     cin >> t;
     int n;
   
    while(t--)
    {  vector<int> results;
        cin>>n;
        int place=1;
        while(n>0)
        {
            int digit=n%10;
            if(digit!=0)
            results.push_back(digit*place);
            n=n/10;
            place=place*10;
        }
        cout<<results.size()<<"
";
        for( auto i:results)
        {
            cout<<i<<" ";
        }
 
    }
    return 0;
}