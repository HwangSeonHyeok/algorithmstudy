#include <iostream> 
using namespace std;

int modnum = 1000000009;

int dp[100001][3] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    dp[1][0] = 1;
    dp[2][1] = 1;
    dp[3][0] = 1;
    dp[3][1] = 1;
    dp[3][2] = 1;
    for(int i = 4; i<100001; i++){
        dp[i][0] = (dp[i-1][1]+dp[i-1][2])%modnum;
        dp[i][1] = (dp[i-2][0]+dp[i-2][2])%modnum;
        dp[i][2] = (dp[i-3][0]+dp[i-3][1])%modnum;
    }
    int t;
    cin >> t;
    for(int i = 0; i<t;i++){
        int n;
        cin >> n; 
        int ans = ((dp[n][0] + dp[n][1]) %modnum + dp[n][2] )%modnum;
        cout << ans << '\n';
    }

}