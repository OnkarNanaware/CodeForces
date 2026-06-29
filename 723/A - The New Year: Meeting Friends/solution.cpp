#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
 
int main() {
int x1,x2,x3;
 
cin>>x1>>x2>>x3;
int a[] = {x1, x2, x3};
sort(a, a + 3);
int total_steps = (a[2] - a[0]);
cout<<total_steps<<"
";
return 0;
}