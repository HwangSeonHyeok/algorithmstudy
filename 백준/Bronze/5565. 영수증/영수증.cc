#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int A, B;
    cin >> A;
    for(int i = 0; i<9; i++){
        cin >> B;
        A -= B;
    }
    cout << A;    
}