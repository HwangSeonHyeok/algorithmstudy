#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int N, num, ans = 0;
        cin >> N;
        for(int j = 0; j<N; j++){
            cin >> num;
            ans += num;
        }
        cout << ans << '\n';
    }
}