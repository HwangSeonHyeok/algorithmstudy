#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int dp[10001][2] = {0,}; //연속 1 연속 2 
    int n = 0;
    cin >> n;
    int wine[n+1] = {0,};
    for(int i = 1; i<=n; i++){
        scanf("%d", &wine[i]);
    }
    dp[1][0] = wine[1];
    dp[2][0] = wine[2];
    dp[2][1] = dp[1][0] + wine[2];
    for(int i = 3; i<=n; i++){
         dp[i][0] = max(dp[i-2][0], max(dp[i-2][1],max(dp[i-3][0],dp[i-3][1]))) + wine[i];
         dp[i][1] = dp[i-1][0] + wine[i];
    }
    cout << max(dp[n][0],max(dp[n][1],max(dp[n-1][0],dp[n-1][1])));
    
}