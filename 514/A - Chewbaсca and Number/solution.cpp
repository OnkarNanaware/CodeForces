#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
 
int main() {
    string t;
    //cout<<"Enter number  ";
    cin >> t;
    int d;
    for(int i=0;i<t.length();i++)
    {
    int d=t[i]-'0'; 
    int inverted=9-d;
    if(i==0 && inverted==0)continue;
    if(inverted<d)
    t[i]=inverted+'0';
 
    }
cout<<t<<"
";
 
    return 0;
}