#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
  int x=0;
    for (int i = 0; i < t; i++) {
string opr;
cin>>opr;
transform(opr.begin(), opr.end(), opr.begin(), ::toupper);
if (opr == "++X" || opr == "X++") {
    x++;
} else if (opr == "--X" || opr == "X--") {
    x--;
}
}
 cout<<x<<"
";
    return 0;
}