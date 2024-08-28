#include <iostream>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool arr[31] = {0,};
    for(int i=0; i<28; i++){
        int n;
        cin >> n;
        arr[n] = 1;
    }
    for(int i = 1; i<31; i++){
        if(!arr[i]){
            cout<<i<<'\n';
        }
    }

}