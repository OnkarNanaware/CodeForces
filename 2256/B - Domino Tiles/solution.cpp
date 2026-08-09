#include <iostream>
#include <string>
 
using namespace std;
 
// Returns the number of valid alternating patterns for a subsequence
long long count_ways(const string& sub) {
    bool can_pattern_a = true; // Pattern starting with '0': 0, 1, 0, 1...
    bool can_pattern_b = true; // Pattern starting with '1': 1, 0, 1, 0...
 
    for (int i = 0; i < (int)sub.size(); ++i) {
        if (sub[i] == '?') continue;
 
        char expected_a = (i % 2 == 0) ? '0' : '1';
        char expected_b = (i % 2 == 0) ? '1' : '0';
 
        if (sub[i] != expected_a) can_pattern_a = false;
        if (sub[i] != expected_b) can_pattern_b = false;
    }
 
int ways = 0;
if (can_pattern_a) ways++;
if (can_pattern_b) ways++;
return ways;
}
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    string even_sub = "";
    string odd_sub = "";
 
    // Split string into even and odd index subsequences
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            even_sub += s[i];
        } else {
        odd_sub += s[i];
    }
}
 
long long even_ways = count_ways(even_sub);
long long odd_ways = count_ways(odd_sub);
 
long long MOD = 998244353;
long long total_ways = (even_ways * odd_ways) % MOD;
 
cout << total_ways << "
";
}
 
int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
return 0;
}