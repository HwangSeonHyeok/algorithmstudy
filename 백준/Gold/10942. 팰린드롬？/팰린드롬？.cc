#include <iostream>
#include <algorithm>
using namespace std;

int dp[2001][2001] = {0};
int numarr[2001];
int N, M;


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int S, E;
    cin >> N;
    for(int i = 1; i<=N; i++){
        cin >> numarr[i];
        dp[i][i] = 1;
    }
    for(int i = 1; i<= N-1; i++){
        if(numarr[i]==numarr[i+1]){
            dp[i][i+1] = 1;
        }
    }
    for(int i = 3; i<=N; i++){
        for(int j = 1; j <= N - i + 1; j++){
            if(numarr[j] == numarr[i + j - 1] && dp[j+1][i+j-2]){
                dp[j][i + j - 1] = 1;
            }
        }
    }
    cin >> M;
    for(int i = 0; i<M; i++){
        cin >> S >> E;
        cout << dp[S][E] << '\n';
    }
    
}