#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; if(!(cin>>T)) return 0;
    while(T--){
        int n; cin>>n;
        vector<int> u(n+1), d(n+1);
        for(int i=1;i<=n;i++) cin>>u[i];
        for(int i=1;i<=n;i++) cin>>d[i];
        int m = 2*n;
        vector<int> prefMinU(n+1), prefMaxU(n+1), sufMinD(n+2), sufMaxD(n+2);
        const int INF = 1e9;
        for(int i=1;i<=n;i++){
            if(i==1){ prefMinU[i]=u[i]; prefMaxU[i]=u[i]; }
            else{ prefMinU[i]=min(prefMinU[i-1], u[i]); prefMaxU[i]=max(prefMaxU[i-1], u[i]); }
        }
        for(int i=n;i>=1;i--){
            if(i==n){ sufMinD[i]=d[i]; sufMaxD[i]=d[i]; }
            else{ sufMinD[i]=min(sufMinD[i+1], d[i]); sufMaxD[i]=max(sufMaxD[i+1], d[i]); }
        }
        vector<vector<int>> byMin(m+2);
        for(int t=1;t<=n;t++){
            int mn = min(prefMinU[t], sufMinD[t]);
            int mx = max(prefMaxU[t], sufMaxD[t]);
            byMin[mn].push_back(mx);
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        long long ans=0;
        for(int l=m;l>=1;l--){
            for(int x: byMin[l]) pq.push(x);
            if(!pq.empty()){
                int rmin = pq.top();
                ans += (long long)(m - rmin + 1);
            }
        }
        cout<<ans<<"
";
    }
    return 0;
}