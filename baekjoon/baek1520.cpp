#include <iostream>
#include <algorithm>
using namespace std;

int INF = 1e9;
int dp[501][501];
int graph[501][501];
int xarr[4] = {1, -1, 0, 0};
int yarr[4] = {0, 0, -1, 1};
int M, N;
int search(int x, int y){
    int nextx, nexty;
    if(x== N-1 && y== M-1){
        return 1;
    }
    if(dp[x][y] != -1){
        return dp[x][y];
    }
    dp[x][y] = 0;
    for(int i = 0; i<4; i++){
        nextx = x+xarr[i];
        nexty = y+yarr[i];
        if(nextx>=0&&nextx<N && nexty>=0 && nexty<M){
            if(graph[x][y]>graph[nextx][nexty]){
                dp[x][y] += search(nextx, nexty);
            }
        }

    }
    return dp[x][y];
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> M >> N;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cin >> graph[j][i];
            dp[j][i] = -1;
        }
    }
    int ans = search(0,0);
    cout << ans;
}