#include <iostream>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a1, a0, c, n;
    cin >> a1 >> a0;
    cin >> c;
    cin >> n;
    if(a1*n+a0 <= c*n&& a1<=c){
        cout << 1;
    }else{
        cout << 0;
    }

    
}