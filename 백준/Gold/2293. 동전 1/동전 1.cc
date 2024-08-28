#include <iostream>
#include <algorithm>
using namespace std;
int dp[10001]={0};
int coin[101];
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i<n; i++){
        cin >> coin[i];
    }
    for(int i = 0; i<n; i++){
        if(coin[i]>k) continue;
        dp[coin[i]]++;
        for(int j = coin[i]+1; j<=k;j++){
            dp[j] += dp[j-coin[i]];
        }
    }
    cout << dp[k];
}