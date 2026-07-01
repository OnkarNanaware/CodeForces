#include <iostream>
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
 
    while (tc--)
    {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        if (s.find("...") != string::npos)
        {
            cout << 2 << '
';
        }
        else
        {
            int cnt = 0;
            for (char c : s)
                if (c == '.')
                    cnt++;
 
            cout << cnt << '
';
        }
    }
}