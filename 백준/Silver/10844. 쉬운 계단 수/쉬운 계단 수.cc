#include <iostream>
#include <algorithm>
using namespace std;

int dp[101][10] = {0,};


int main(){
    int x, sum = 0;
    cin >> x;
    for(int i = 1; i<=9; i++){
        dp[1][i] = 1;
    }
    for(int i = 2; i <= x; i++){
        for(int j = 0; j<=9; j++){
            if(j==0){
                dp[i][0] = dp[i-1][1];
            }
            else if(j==9){
                dp[i][9] = dp[i-1][8];
            }
            else{
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
            }
            if(dp[i][j]>=1000000000){
                    dp[i][j] = dp[i][j]%1000000000;
                }
        }
    }
    for(int i = 0; i<=9; i++){
        sum = (sum+dp[x][i])%1000000000;
    }
    cout << sum;


}