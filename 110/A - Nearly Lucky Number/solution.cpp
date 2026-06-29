#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    if (!(cin >> s)) return 0;
 
    int cnt = 0;
    for (char c : s) if (c == '4' || c == '7') ++cnt;
 
    string t = to_string(cnt);
    bool lucky = !t.empty();
    for (char c : t) if (c != '4' && c != '7') { lucky = false; break; }
 
    cout << (lucky ? "YES
" : "NO
");
    return 0;
}