#include <iostream>
using namespace std; 
int main(){
    int t, h, w, n, roomh, roomnum;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> h >> w >> n;
        if (n == 1){
            roomnum = 1;
            roomh = 1;
        }
        else{
            roomnum = (n-1)/h + 1;
            roomh = (n-1)%h + 1;
        }
        if(roomnum<10) 
            cout << roomh <<0<< roomnum << endl;
        else
            cout<< roomh << roomnum << endl;
    }
}