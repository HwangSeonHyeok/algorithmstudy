#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    bool cup[4] = {0,1,0,0};
    int M, X, Y;
    cin >> M;
    for(int i = 0; i<M; i++){
        cin >> X >> Y;
        if(cup[X]){
            cup[X] = false;
            cup[Y] = true;
        }
        else if(cup[Y]){
            cup[Y] = false;
            cup[X] = true;

        }
    }
    for(int i = 0; i<4; i++){
        if(cup[i]){
            cout << i;
        }
    }
}