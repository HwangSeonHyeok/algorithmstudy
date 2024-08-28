#include <iostream> 
using namespace std;
int graph[101][101] = {0,};
int ans[101][101] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cin >> graph[i][j];
            ans[i][j] = graph[i][j];
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
           for(int k = 0; k<n; k++){
            if(ans[j][i] == 1 && ans[i][k] == 1){
                ans[j][k] = 1;
            }
           }
        }
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
    


    
}