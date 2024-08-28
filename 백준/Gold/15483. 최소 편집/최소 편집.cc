#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin >> a;
    cin >> b;
    int lena= a.length();
    int lenb = b.length();

    int dp[lenb+1][lena+1] = {0,};
    for(int i = 0; i<=lena; i++){
        for(int j = 0; j<=lenb; j++){
            if(i == 0){
                dp[j][i] = j;
            }
            else if(j == 0){
                dp[j][i] = i;
            }
            else if(a[i-1]==b[j-1]){
                dp[j][i] = dp[j-1][i-1];
            }
            else{
                dp[j][i] = min(dp[j-1][i],min(dp[j][i-1],dp[j-1][i-1]))+1;
            }
        }
    }
    cout << dp[lenb][lena];
    
}