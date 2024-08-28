#include<algorithm>
#include <iostream>
#include <algorithm>
using namespace std;
int numarr[100000];
int dp[100001];


int main(){
    int n, ans;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> numarr[i];
        dp[i] = numarr[i];
    }
    ans=dp[0];
    for(int i = 1; i < n; i++){
        dp[i] = max(dp[i],dp[i-1] + numarr[i]);
        if(dp[i]>ans){
            ans=dp[i];
        }
    }
    cout << ans;


}
