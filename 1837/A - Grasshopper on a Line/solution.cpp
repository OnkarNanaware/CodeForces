#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int x,k;
    cin>>x>>k;
    int n;//for the moves
    //they want the op as the n for the steps or moves
    //and the no of integers that are not divisible by the given k
    //edge 1 will be the if given  x is not divisble by k then answer will be always n=1 and integers x
    // Check if x is divisible by k
        if (x % k == 0) // If x is divisible by k, we need two moves
        {
            cout << 2 << endl; // Output the number of moves
            cout << 1 << " " << x - 1 << endl; // Output the two moves: 1 and x-1
        }
        else // If x is not divisible by k, we can reach x in one move
        {
            cout << 1 << endl; // Output the number of moves
            cout << x << endl; // Output the move: x
        }
   
}
 
 
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}