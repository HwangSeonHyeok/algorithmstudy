#include <iostream>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, cnt;
    cin >> n;
    cnt = n/4;
    for(int i = 0; i<cnt; i++){
        cout << "long ";
    }
    cout << "int";
}