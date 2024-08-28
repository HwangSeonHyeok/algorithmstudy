#include <iostream> 
#include<cmath>
using namespace std;
int dp[50001] = {0,};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    dp[1] = 1;
    for(int i = 2; i<=n;i++){
        dp[i] = dp[i-1]+1;
        for(int j = 2; j*j<=i;j++){
            int jpow= j*j;
            dp[i] = min(dp[i],dp[i-jpow]+1);
        }
    }
    cout << dp[n];
    
}