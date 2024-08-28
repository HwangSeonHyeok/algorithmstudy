#include <iostream>
using namespace std;



int n;
int leftcard[2001] = {0,};
int rightcard[2001] = {0,};
int dp[2001][2001] = {0,};

int solve(int l, int r){
    if(l>n || r>n){
        return 0;
    }
    if(dp[l][r]!=-1){
        return dp[l][r];
    }
    dp[l][r] = max(solve(l+1,r),solve(l+1,r+1));
    if(leftcard[l]>rightcard[r]){
        dp[l][r] = max(dp[l][r], solve(l,r+1)+rightcard[r]);
    }
    return dp[l][r];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;
    for(int i = 1; i<=n;i++){
        cin >> leftcard[i];
    }
    for(int i = 1; i<=n;i++){
        cin >> rightcard[i];
    }
    for(int i =1; i<=n;i++){
        for(int j=1; j<=n; j++){
            dp[i][j] = -1;
        }
    }
    int ans = solve(1,1);
    cout << ans;

    
}