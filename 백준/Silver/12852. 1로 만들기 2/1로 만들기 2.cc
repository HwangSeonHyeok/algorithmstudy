#include<iostream>
#include<algorithm>
using namespace std;
int dp[1000001][2]; //횟수, 목표
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    dp[1][1] = 0;
    dp[2][0] = 1;
    dp[2][1] = 1;
    dp[3][0] = 1;
    dp[3][1] = 1;
    for(int i = 4; i<=n; i++){
        if(i%6==0){
            if(dp[i/3][0]<=dp[i/2][0]&&dp[i/3][0]<=dp[i-1][0]){
                dp[i][0] = dp[i/3][0]+1;
                dp[i][1] = i/3;
            }else if(dp[i/2][0]<=dp[i/3][0]&&dp[i/2][0]<=dp[i-1][0]){
                dp[i][0] = dp[i/2][0]+1;
                dp[i][1] = i/2;
            }else{
                dp[i][0] = dp[i-1][0]+1;
                dp[i][1] = i-1;
            }
        }
        else if(i%3==0){
            if(dp[i/3][0]<=dp[i-1][0]){
                dp[i][0] = dp[i/3][0]+1;
                dp[i][1] = i/3;
            }else{
                dp[i][0] = dp[i-1][0]+1;
                dp[i][1] = i-1;
            }
        }
        else if(i%2==0){
            if(dp[i/2][0]<=dp[i-1][0]){
                dp[i][0] = dp[i/2][0]+1;
                dp[i][1] = i/2;
            }else{
                dp[i][0] = dp[i-1][0]+1;
                dp[i][1] = i-1;
            }
        }else{
            dp[i][0] = dp[i-1][0]+1;
            dp[i][1] = i-1;
        }
        
    }
    cout << dp[n][0] << '\n';
    int next = n;
    while(next!=0){
        cout << next << ' ';
        next = dp[next][1];
    }


    
}