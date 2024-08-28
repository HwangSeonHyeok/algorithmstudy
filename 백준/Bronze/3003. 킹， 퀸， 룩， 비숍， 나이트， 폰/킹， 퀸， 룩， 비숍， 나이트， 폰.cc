#include <iostream>
using namespace std;

int chesspiece[6] = {1,1,2,2,2,8};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i = 0; i<6; i++){
        int piece;
        cin >> piece;
        cout << chesspiece[i] - piece << ' ';
    }
    
    
}