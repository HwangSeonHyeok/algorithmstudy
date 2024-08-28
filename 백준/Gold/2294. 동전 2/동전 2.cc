#include <iostream> 
#include <vector>
#include<algorithm>
using namespace std;
int dp[10001] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    vector<int> coins;
    cin >> n >> k;
    for(int i = 0; i<n; i++){
        int value;
        cin >> value;
        if(value<=10000){
            coins.push_back(value);
            dp[value] = 1;
        }
    }

    for(int i = 1; i<=k; i++){
        for(auto coin : coins){
            if(i>=coin){
                if(dp[i-coin]!=0){
                    if(dp[i]==0){
                        dp[i] = dp[i-coin]+1;
                    }else{
                        dp[i] = min(dp[i-coin]+1,dp[i]);
                    }
                }
            
                
            }
        }
    }
    if(dp[k]==0){
        cout << -1;
    }else{
        cout << dp[k];
    }


}