#include <iostream>
#include <algorithm>
using namespace std;
int dp[101][10001] = {0,};
int course[101][2] = {0,}; //0에는 공부시간 1에는 배점

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, t;
    cin>> n >> t;
    for(int i = 1;i<=n; i++){
        cin >> course[i][0] >> course[i][1];

    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=t; j++){
            if(j>=course[i][0]){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-course[i][0]]+course[i][1]);
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][t];
    
    
    

}

