#include<iostream>
#include<vector>
using namespace std;
int main()
{
  string name;
  cin>>name;
   string result="";
 vector<char> v={'a', 'e', 'i', 'o', 'u','y', 'A', 'E', 'I', 'O', 'U','Y'};
 for(int i=0;i<name.size();i++)
 {
     for(int j=0;j<v.size();j++)
     {
         if(name[i]==v[j])
         {
             name.erase(i,1);
             i--;
             break;
         }
     }
 }
 
 
 
for(int i=0;i<name.size();i++)
{
    if(isalpha(name[i])|| isupper(name[i]))
    {
        name[i]=tolower(name[i]);
        result+='.';
         result+=name[i];
    }
}
cout<<result<<"
";
    return 0;
 
}