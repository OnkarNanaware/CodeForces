#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
 
    while (tc--)
    {
        int n, x;
        cin >> n >> x;
 
        vector<int> arr(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        int dis = arr[0]; // distance from 0 to first point
 
        // maximum gap between consecutive points
        for (int i = 0; i < n - 1; i++)
        {
            dis = max(dis, arr[i + 1] - arr[i]);
        }
 
        // last jump doubled
        dis = max(dis, 2 * (x - arr[n - 1]));
 
        cout << dis << endl;
    }
 
    return 0;
}