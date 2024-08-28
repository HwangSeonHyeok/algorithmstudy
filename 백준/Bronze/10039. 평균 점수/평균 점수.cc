#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int num, avg = 0;
    for(int i = 0; i<5; i++){
        cin >> num;
        if(num<40) num = 40;
        avg += num;
    }
    cout << avg/5;
}