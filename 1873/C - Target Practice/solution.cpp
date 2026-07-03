#include <bits/stdc++.h>
using namespace std;
 
// Predefined score matrix representing the target's rings
// Each element represents the score for that position on the target
const int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};
 
int main()
{
    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        int ans = 0;
 
for (int i = 0; i < 10; i++) {
    string s;
    cin >> s;
 
    for (int j = 0; j < 10; j++) {
        if (s[j] == 'X') {
            int d = min({i, j, 9 - i, 9 - j});
            ans += d + 1;
        }
    }
}
 
cout << ans << '
';
    }
    return 0;
}
 
// Time Complexity (TC): O(n^2) = O(100)
// Space Complexity (SC): O(10*10) = O(100)