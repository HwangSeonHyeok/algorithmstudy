#include <iostream> 
#include <vector>
using namespace std;
int dp[31] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if(n%2==1){
        cout << 0;
    }else{
        dp[2] = 3;
        for(int i = 4; i<=n; i++){
            if(i%2==1){
                continue;
            }

            dp[i] = dp[i-2] * 3 + 2;
            for(int j = 4; j<i; j++){
                dp[i] += dp[i-j]*2;
            }
        }
        cout << dp[n];
    }
    
}