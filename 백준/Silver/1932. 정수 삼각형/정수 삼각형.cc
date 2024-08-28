#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int triarr[500][500];
    int dp[500][500] = {0,};
    int maxsum=0;
    cin  >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cin >> triarr[i][j];
        }
    }
    dp[0][0] = triarr[0][0];
    for(int i = 1; i<n; i++){
        dp[i][0] = dp[i-1][0] + triarr[i][0];
        for(int j = 1; j<i+1; j++){    
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + triarr[i][j];

        }
        dp[i][i] = dp[i-1][i-1] + triarr[i][i];
    }
    for(int i = 0; i<n; i++){
        if(dp[n-1][i]>maxsum)
            maxsum = dp[n-1][i];
    }
    printf("%d", maxsum);
    


    

    
}