#include<algorithm>
#include <iostream>
using namespace std;

int items[101][2]; //0은 웨이트 1은 밸류
int dp[101][100001]={0};//[][0]엔 밸류 그 뒤부턴 물건 기록
int n, k;

int main(){
    scanf("%d %d", &n, &k);
    
    

    for(int i = 1; i<=n; i++){
        scanf("%d %d", &items[i][0], &items[i][1]);
        
    }
    for(int i = 1; i<=n; i++){
        for(int j =1; j<=k; j++){
            if(j>=items[i][0]){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-items[i][0]] + items[i][1]);
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    
    
    cout << dp[n][k];


}