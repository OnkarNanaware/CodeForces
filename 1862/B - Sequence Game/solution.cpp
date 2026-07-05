#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
 
    vector<int> a;
    // The first element is always included
    a.push_back(b[0]);
 
    for (int i = 1; i < n; ++i) {
        // If there is a decrease, insert the element twice to satisfy the condition
        if (b[i] < b[i - 1]) {
            a.push_back(b[i]);
        }
        a.push_back(b[i]);
    }
 
    // Output the size of the reconstructed array
    cout << a.size() << "
";
    // Output the elements of the reconstructed array
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << (i == a.size() - 1 ? "" : " ");
    }
    cout << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}