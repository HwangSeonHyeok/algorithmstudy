#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, weight[1001];
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> weight[i];
    }
    sort(weight,weight+N);
    int ans = 0;
    for(int i = 0; i<N; i++){
        if(weight[i]>ans+1){
            break;
        }
        ans += weight[i];
    }
    cout << ans+1;
}