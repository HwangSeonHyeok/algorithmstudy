#include <iostream>
#include <algorithm>
using namespace std;
int costarr[1001][3];
int dp[1001][3];



    


int main(){
    int n, lowcost;
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &costarr[i][0], &costarr[i][1], &costarr[i][2]);
    }
    dp[0][0]= costarr[0][0];
    dp[0][1] = costarr[0][1];
    dp[0][2] = costarr[0][2];
    for(int i = 1; i<n+1; i++){
        dp[i][0] = min(dp[i-1][1],dp[i-1][2]) + costarr[i][0];
        dp[i][1] = min(dp[i-1][0],dp[i-1][2]) + costarr[i][1];
        dp[i][2] = min(dp[i-1][1],dp[i-1][0]) + costarr[i][2];
    }
    lowcost = min(dp[n][0],min(dp[n][1],dp[n][2]));
    cout << lowcost;

    

    
}