#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> res;
     for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        res.push_back(2 * n);
    }
 
    for (int i = 0; i < t; ++i) {
        cout << res[i] << "
";
    }
 
    return 0;
}