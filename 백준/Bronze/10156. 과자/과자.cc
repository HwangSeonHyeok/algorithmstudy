#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int K, N, M, total, ans = 0;
    cin >> K >> N >> M;
    total = K*N;
    if(M < total){
        ans = total - M;
    }
    cout << ans;
}