#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            cout << '*';
        }
        cout << '\n';
    }
}