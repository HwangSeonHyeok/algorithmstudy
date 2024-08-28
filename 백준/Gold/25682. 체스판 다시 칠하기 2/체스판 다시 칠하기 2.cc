#include <iostream> 
#include <algorithm>
using namespace std;

int arrB[2001][2001] = {0,};
int arrW[2001][2001] = {0,};



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,k;
    cin >> n >> m >> k;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=m;j++){
            char c;
            cin >> c;
            arrB[i][j] = arrB[i-1][j] + arrB[i][j-1] - arrB[i-1][j-1];
            arrW[i][j] = arrW[i-1][j] + arrW[i][j-1] - arrW[i-1][j-1];
            if(c=='B'){
                if((i+j)%2 == 0){
                    arrW[i][j]++;
                }else{
                    arrB[i][j]++;
                }
            }else{
                if((i+j)%2 == 0){
                    arrB[i][j]++;
                }else{
                    arrW[i][j]++;
                }
            }
        }
    }
    int result =2e9;
    for(int i = k; i<=n; i++){
        for(int j = k; j<=m; j++){
            int b,w;
            b = arrB[i][j] - arrB[i-k][j] - arrB[i][j-k] + arrB[i-k][j-k];
            w = arrW[i][j] - arrW[i-k][j] - arrW[i][j-k] + arrW[i-k][j-k];
            result = min(result,min(b,w));
        }
    }
    cout << result;

}