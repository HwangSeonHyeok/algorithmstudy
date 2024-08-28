#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n = 0, in, out, ans = 0;
    for(int i =0; i<4; i++){
        cin >> out >> in;
        n += in - out;
        if(ans<n){
            ans = n;
        }
    }
    cout << ans;
}