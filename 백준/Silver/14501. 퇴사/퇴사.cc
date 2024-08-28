#include <iostream> 
using namespace std;

int dp[16] = {0,};
int councel[16][2] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> councel[i][0] >> councel[i][1];
    }
    for(int i = 1; i<=n; i++){
        int end = i + councel[i][0]-1;
        if(end<=n){
            dp[end] = max(dp[end],dp[i-1]+councel[i][1]);

        }
        dp[i] = max(dp[i-1],dp[i]);
    }
    
    cout << dp[n];
}