//2629번 양팔저울
#include <iostream>
#include <algorithm>
using namespace std;
int wn, mn, w[31]={0,};
bool dp[31][15001]={0,};
bool cmp(int x, int y){
    if(x>y){
        return true;
    }else
        return false;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
     //wn 추개수, mn 구슬개수
    dp[0][0] = true;
    cin >> wn;
    for(int i = 1; i<=wn; i++){
        cin >>w[i];
    }
    for(int i = 1; i<=wn; i++){
        dp[i][w[i]] = true;
        for(int j = 0; j<=wn*500;j++){
            if(dp[i-1][j]){
                dp[i][j] = true;
                if((!dp[i][j-w[i]])&&(j-w[i]>0))
                    dp[i][j-w[i]] = true;
                if((!dp[i][j-w[i]])&&(w[i]-j>0))
                    dp[i][w[i]-j] = true;
                if(!dp[i][j+w[i]])
                    dp[i][j+w[i]] = true;
            }
        }
    }
    cin >> mn;
    for(int i = 0; i<mn; i++){
        int m,sum;
        cin >> m;
        if(m>15000){
            cout << "N ";
        }
        else{
            if(dp[wn][m]){
                cout << "Y ";
            }
            else{
                cout << "N ";
            }
        }
    }
}