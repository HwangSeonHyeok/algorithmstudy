#include <iostream>
using namespace std;

int chesspiece[6] = {1,1,2,2,2,8};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i;j++){
            cout << ' ';
        }
        for(int j = 0; j<i*2-1; j++){
            cout << '*';
        }
        cout << '\n';
    }
    for(int i = n-1; i>=1; i--){
        for(int j = 1; j<=n-i;j++){
            cout << ' ';
        }
        for(int j = 0; j<i*2-1; j++){
            cout << '*';
        }
        cout << '\n';
    }
    
    
}