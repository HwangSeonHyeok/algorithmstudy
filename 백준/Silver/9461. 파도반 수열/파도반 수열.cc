#include <iostream>
using namespace std;
long long dp[101] = {0, };
long long tri(int n){
    if(dp[n]==0){
        if(n>5){
            dp[n] = tri(n-1) + tri(n-5);
        }
        else if(n>3){
            dp[n]= 2;
        }
        else dp[n] = 1;
    }
    return dp[n];
}


    


int main(){
    int t,n;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> n;
        tri(n);
        printf("%lld\n", dp[n]);
    }

    
}