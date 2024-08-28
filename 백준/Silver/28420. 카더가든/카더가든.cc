#include <iostream>
#include <queue>
using namespace std;

int pSum[301][301];


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,a,b,c;
    cin >> n >> m;
    cin >> a >> b >> c;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            int num;
            cin >> num;
            pSum[i][j]= num +pSum[i-1][j] + pSum[i][j-1] - pSum[i-1][j-1];
        }
    }
    int ans=1e9;
    int d = b+c;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=m;j++){
            if(j>=d&&i>=a){
                int sum = pSum[i][j] - pSum[i-a][j] - pSum[i][j-d] + pSum[i-a][j-d];
                ans = min(ans,sum);
            }
            if(j>=c+a&&i>=b+a){
                int sum1,sum2,total; 
                sum1 = pSum[i][j] - pSum[i-b][j]-pSum[i][j-a]+ pSum[i-b][j-a];
                sum2 = pSum[i-b][j-a]- pSum[i-b-a][j-a] - pSum[i-b][j-a-c] + pSum[i-b-a][j-a-c];
                total = sum1+sum2;
                ans = min(ans,total); 
            }
            if(j>=b+a&&i>=c+a){
                int sum1,sum2,total;
                sum1 = pSum[i][j] - pSum[i-c][j] - pSum[i][j-a] + pSum[i-c][j-a];
                sum2 = pSum[i-c][j-a] -pSum[i-c-a][j-a] - pSum[i-c][j-a-b] + pSum[i-c-a][j-a-b];
                total = sum1+sum2;
                ans = min(ans,total);
                
            }

        }
    }

    cout << ans;

   
   

}