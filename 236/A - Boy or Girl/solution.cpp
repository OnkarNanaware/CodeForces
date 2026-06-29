#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
    string name;
    cin>>name;
    int n; 
   set <char>s(name.begin(),name.end());
    n=s.size();
    if(n%2==0)
    {
        cout<<"CHAT WITH HER!"<<"
";
    }
    else
    {
        cout<<"IGNORE HIM!"<<"
";
    }
    return 0;
}