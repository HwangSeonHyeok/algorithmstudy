#include <iostream>
#include <algorithm>
using namespace std;
int memory[101] = {0,};
int cost[101] = {0,};
int dp[101][10001] = {0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N, M;
    cin >> N >> M;
    for(int i = 1; i<=N; i++){
        cin >> memory[i];
    }
    for(int i = 1; i<=N; i++){
        cin >> cost[i];
    }
    for(int i = 1; i<=N; i++){
        for(int j = 10000;j>=0;j--){
            if(j>=cost[i])
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-cost[i]]+memory[i]);
            else
                dp[i][j] = dp[i-1][j];
                
        }
        
    }

    
    for(int i = 0; i<=10000;i++){
        if(dp[N][i]>=M){
            cout << i;
            break;
        }
    }
}