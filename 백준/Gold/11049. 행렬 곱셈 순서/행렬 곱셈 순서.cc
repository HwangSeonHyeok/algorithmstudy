#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int INF = 1e9;
int dp[501][501];
int sum[501];
vector<pair<int,int>> vec;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, r, c, curR, curC, nextR, nextC;
    cin >> N;
    vec.push_back(make_pair(0,0));
    for(int i = 0; i < N; i++){
        cin >> r >> c;
        vec.push_back(make_pair(r,c));
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; i + j<=N; j++){
            dp[j][i+j] = INF;
            for(int k = j; k <= i+j; k++){
                dp[j][i+j] = min(dp[j][i+j], dp[j][k] + dp[k+1][i+j] + vec[j].first * vec[k].second * vec[i+j].second);
            }

        }
    }
    cout << dp[1][N];
    return 0;
}