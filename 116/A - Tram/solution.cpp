#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,a,b;
    vector<int>v;
    cin>>n;
    int total = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        total = total - a + b;
        v.push_back(total);
    }
    cout << *max_element(v.begin(), v.end());
    return 0;
 
}