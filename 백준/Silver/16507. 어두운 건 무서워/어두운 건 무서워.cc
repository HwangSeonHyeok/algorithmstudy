#include <iostream> 
using namespace std;

int r,c,q, image[1001][1001] = {0,}, sum[1001][1001]={0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> r >> c >> q;
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=c; j++){
            cin >> image[i][j];
        }
    }
    for(int i = 1; i<=r;i++){
        for(int j = 1; j<=c; j++){
            sum[i][j] = image[i][j] + sum[i-1][j] + sum[i][j-1]-sum[i-1][j-1];
        }
    }
    for(int i = 0; i<q;i++){
        int r1,c1,r2,c2,ans;
        cin >> r1 >> c1 >> r2 >> c2;
        int size = (r2-r1+1) * (c2-c1+1);
        ans = (sum[r2][c2]-sum[r2][c1-1]-sum[r1-1][c2] + sum[r1-1][c1-1])/size;
        cout << ans << '\n';
    }


}