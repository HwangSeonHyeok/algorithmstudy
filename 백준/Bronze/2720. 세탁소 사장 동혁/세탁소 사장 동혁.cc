#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, arr[4] = {25, 10, 5, 1};
    cin >> n;
    for (int i = 0; i<n; i++){
        int c;
        cin >> c;
        for(int j = 0; j<4; j++){
            if(c == 0){
                cout << 0 << ' ';    
            }else{
                cout << c/arr[j] << ' ';
            }
            c %=arr[j];
        }
        cout << '\n';
    }
}