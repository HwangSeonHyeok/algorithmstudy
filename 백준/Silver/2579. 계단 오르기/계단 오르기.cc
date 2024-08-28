#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int stairarr[300];
    int dp[300][2] = {0,};  //0일땐 한칸연속(2칸 한번에 올라옴),1일땐 2칸연속
    int scoresum=0;
    cin  >> n;
    for(int i = 0; i < n; i++){
        cin >> stairarr[i];
    }
    dp[0][0] = stairarr[0];
    dp[1][0] = stairarr[1];
    dp[1][1] = dp[0][0] + stairarr[1];
    
    for(int i = 2; i < n; i++){
        dp[i][0] = max(dp[i-2][0],dp[i-2][1]) + stairarr[i];
        dp[i][1] = dp[i-1][0] + stairarr[i];

    }
    if(dp[n-1][0]>dp[n-1][1]){
        printf("%d", dp[n-1][0]);
    }
    else{
        printf("%d", dp[n-1][1]);
    }
}