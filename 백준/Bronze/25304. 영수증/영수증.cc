#include <iostream>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, n, total = 0;
    cin >> x;
    cin >> n;
    for(int i = 0; i<n; i++){
        int a, b;
        cin >> a >> b;
        total += a * b;
    }
    if(x==total){
        cout << "Yes";
    }else{
        cout << "No";
    }
}