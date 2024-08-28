#include <iostream> 
using namespace std;
int dp[1001] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    int card[1001] = {0,};
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> card[i];
    }

    for(int i = 1;i<=n;i++){
        for(int j = 1; j<=i;j++){
            dp[i] = max(dp[i],dp[i-j]+card[j]);
        }
    }
    cout << dp[n];
    
}