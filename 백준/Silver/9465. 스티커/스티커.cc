#include <iostream>
#include <algorithm>
using namespace std;
int dp[100001][2];



int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T, n, ans;
    cin >> T;
    for(int t = 0; t<T; t++){
        cin >> n;
        for(int i = 0; i<2; i++){
            for(int j = 0; j<n; j++){
                cin >> dp[j][i];
            }
        }
        dp[1][0] += dp[0][1];
        dp[1][1] += dp[0][0];
        for(int i = 2; i<n; i++){
            dp[i][0] += max(dp[i-2][1], dp[i-1][1]);
            dp[i][1] += max(dp[i-2][0], dp[i-1][0]);
        }
        ans = max(dp[n-1][0], dp[n-1][1]);
        cout << ans << '\n';
    }
}