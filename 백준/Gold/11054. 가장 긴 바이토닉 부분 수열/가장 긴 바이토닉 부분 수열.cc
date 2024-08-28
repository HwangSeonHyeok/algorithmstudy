#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int dp[1001]={0,}, dp2[1001] = {0,}, dp3[1001] = {0,};
    int n = 0, ans = 0;
    cin >> n;
    int numarr[n+1] = {0,};
    for(int i = 1; i<=n; i++){
        cin >> numarr[i];
    }
    for(int i = 1; i<=n; i++){
        dp[i] = 1;
        for(int j = 1; j <=i; j++){
            if(numarr[i]>numarr[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    for(int i = n; i>=1; i--){
        dp2[i] = 1;
        for(int j = n; j >=i; j--){
            if(numarr[i]>numarr[j]){
                dp2[i] = max(dp2[i],dp2[j]+1);
            }
        }
    }
    for(int i = 1; i<=n; i++){
        dp3[i] = dp[i] + dp2[i]-1;
        if(dp3[i]>ans){
            ans = dp3[i];
        }
    }
    cout<< ans;
    
}