#include <iostream>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, ans =0;
    cin >> n;
    for(int i = 0; i<5;i++){
        int num;
        cin >> num;
        if(num==n){
            ans++;
        }
    }
    cout << ans;
    return 0;



}