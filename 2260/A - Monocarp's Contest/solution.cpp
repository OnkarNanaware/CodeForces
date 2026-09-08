#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
 
        int n;
        cin >> n;
 
        int arr[n];
 
        int c0 = 0, c1 = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
 
            if (arr[i] == 0)
                c0++;
            else
                c1++;
        }
 
        if (arr[0] == 0 && arr[n - 1] == 0) {
            cout << 0 << endl;
        }
        else {
            if (c0 < 2) {
                cout << -1 << endl;
            }
            else {
                if (arr[0] == 0 && arr[n - 1] == 1) {
                    cout << 1 << endl;
                }
 
                if (arr[0] == 1 && arr[n - 1] == 1) {
                    cout << 2 << endl;
                }
 
                if (arr[0] == 1 && arr[n - 1] == 0) {
                    cout << 1 << endl;
                }
            }
        }
    }
 
    return 0;
}