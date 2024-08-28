#include <iostream>
/*#include <algorithm>
#include <cmath>
#include <vector>*/
using namespace std;
int arr[100001] = {0,};
int dp[100010] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N, K, ans = 2e9;
    cin >> N >> K;
    for(int i = 0; i<N; i++){
        int num = 0;
        cin >> num;
        arr[i] = num;
    }
    for(int i = 0; i<K; i++){
        dp[i] = arr[i];
    }
    for(int current = K; current<N;current++){
        int m = 0;
        dp[current] = arr[current];
        for(int cnt = 1; cnt<=K; cnt++){
            if(dp[current-cnt]<=arr[current]){
                break;
            }
            else if(m == 0){
                m = dp[current-cnt];
            }
            else if(m!= 0 && m>dp[current-cnt]){
                m = dp[current-cnt];
            }
            if(cnt == K){
                dp[current] = m;
            }
        }
    }
    for(int i = 1; i<=K; i++){
        if(ans>dp[N-i]){
            ans = dp[N-i];
        }
    }
    cout << ans;
}