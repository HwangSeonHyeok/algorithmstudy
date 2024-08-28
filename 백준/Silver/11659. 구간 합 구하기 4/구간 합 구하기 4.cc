#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N,M, sum[100010]={0,};
    cin >> N >> M;
    for(int i = 1; i<=N; i++){
        int num;
        cin >> num;
        sum[i]= sum[i-1] + num;
    }
    for(int i = 0; i<M; i++){
        int s, e, result;
        cin >> s >> e;
        result = sum[e] - sum[s-1];
        cout << result << '\n';
    }
}