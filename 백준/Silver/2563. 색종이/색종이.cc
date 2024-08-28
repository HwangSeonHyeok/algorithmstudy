#include <iostream>
using namespace std;

bool arr[101][101]={0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, result = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        for(int i = 0; i<10; i++){
            for(int j = 0; j<10; j++){
                arr[x+i][y+j] = 1;
            }
            
        }
    }
    for(int i = 1; i<101; i++){
        for(int j = 1; j<101;j++){
            if(arr[i][j]){
                result++;
            }
        }
    }
    cout << result;

    
}