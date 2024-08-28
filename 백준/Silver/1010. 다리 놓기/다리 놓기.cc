#include<iostream>
#include<algorithm>
using namespace std;
int dp[31][31];
int pascal(int n, int k){
    long long ans;
    
    dp[1][1] = 1;
    dp[1][0] = 1;
    for(int i = 2; i<= n; i++){
        for(int j = 0 ; j <= k; j++){
            if(j == 0 || i == j)
                dp[i][j] =1;
            else
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }
    return dp[n][k];


}

int main(){
    int t;
    cin >> t;
    int n, m;
    for(int i =0; i<t; i++){
        cin >> n >> m;
        cout << pascal(m,n)<<"\n";

    }



}