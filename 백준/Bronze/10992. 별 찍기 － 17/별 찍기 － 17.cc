#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    if(n!=1){
        for(int i=0; i<n-1;i++){
            cout << ' ';
        }
        cout << '*' << '\n';
    }
    for(int i = 2;i<n;i++){
        for(int j = 0; j<n-i;j++){
            cout << ' ';
        }
        cout <<'*';
        for(int j = 0; j<i*2-3;j++){
            cout << ' ';
        }
        cout << '*';
        cout << '\n';
    }
    for(int i = 0; i<n*2-1; i++){
        cout <<'*';
    }
    

    
}