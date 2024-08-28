#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T = 1, A = 0, B = 0, C = 0;
    cin >> T;
    if(T>=300){
        A = T / 300;
        T= T % 300;
    }
    if(T>=60){
        B = T / 60;
        T= T % 60;
    }
    if(T>=10){
        C = T / 10;
        T= T % 10;
    }
    if(T!=0){
        cout << -1;
    }
    else{
        cout << A << " " << B << " " << C;
    }
    return 0;
}