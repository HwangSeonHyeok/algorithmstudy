#include <iostream>
//#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N,K, max = -2e9, sum[100010]={0,};
    cin >> N >> K;
    for(int i = 1; i<=N; i++){
        int num;
        cin >> num;
        sum[i] = sum[i-1] + num;
    }
    for(int i = 0; i+K<=N; i++){
        int s = sum[i+K]-sum[i];
        if(max<s){
            max = s;
        }
    }
    cout << max;
}