#include <iostream>
using namespace std;
int dp[301][301] = {0,};
int graph[301][301] = {0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> graph[i][j];
        }
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            dp[i][j] = max(dp[i-1][j],dp[i][j-1])+graph[i][j];
        }
    }
    cout << dp[n][m];

}