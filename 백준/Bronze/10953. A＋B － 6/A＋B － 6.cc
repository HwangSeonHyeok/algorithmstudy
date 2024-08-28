#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    char c;
    int T, A, B, ans;
    cin >> T;
    for(int i = 0; i<T ;i++){
        cin >> A >> c >> B;
        ans = A+B;
        cout << ans << '\n';
    }
}