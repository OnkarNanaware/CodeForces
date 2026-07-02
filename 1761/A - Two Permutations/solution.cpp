#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
 
        if (a + b < n - 1 || (a == n && b == n))
            cout << "Yes
";
        else
            cout << "No
";
    }
 
    return 0;
}