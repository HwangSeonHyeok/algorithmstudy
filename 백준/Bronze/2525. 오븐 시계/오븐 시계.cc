#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int A, B, C, temp;
    cin >> A >> B;
    cin >> C;
    B = B + C;
    temp = B/60;
    A += temp;
    B %= 60;
    A %= 24;
    cout << A << " " << B;
    
}