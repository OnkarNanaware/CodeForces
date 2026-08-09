#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n=s.length();
        int ab=0,ba=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i] == 'a' && s[i+1] == 'b')
            {
                ab++;
            }else if(s[i] == 'b' && s[i+1] == 'a')
            {
                ba++;
            }
    }
    if(ab==ba){
    cout<<s<<endl;
    continue;
    }else
    {
        if(s[0]!= s[n-1])
        {
           s[0]=s[n-1];
        }
    }
    cout<<s<<endl;
}
return 0;
}