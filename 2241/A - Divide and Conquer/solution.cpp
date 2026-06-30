#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
 
    while (tc--)
    {
        int x,y,z;
        cin>>x;
        cin>>y;
 
        if(y>x)
        {
            cout<<"NO"<<endl;
        }
        else if(x%y==0)
        {
            cout<<"YES"<<endl;
 
        }
        else{
            cout<<"NO"<<endl;
 
        }
 
    }
 
    return 0;
}