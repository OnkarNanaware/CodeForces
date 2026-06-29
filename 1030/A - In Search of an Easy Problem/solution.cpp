#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d;
    int count=0;
    for(int i=0;i<n;i++)
{
   cin>>d;
   count+=d;
}
if(count==0)
{
    cout<<"EASY"<<"
";
}
else
{
    cout<<"HARD"<<"
";
}
}