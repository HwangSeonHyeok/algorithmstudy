//10986번 나머지 합
//long이 아니라 int를 써서 삽질을 많이 했다.
//N값도 크고 combination으로 들어가야하는 문제라 수가 많이 큼
#include <iostream>
//#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long N, M, sum = 0, cnt[1010] = {0,};
    long result = 0;
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        int num;
        cin >> num;
        sum = (sum + num)%M;
        cnt[sum]++;
    }
    if(cnt[0]>=1){
        cnt[0]++;
    }
    for(int i = 0; i<M; i++){
        if(cnt[i]>1){
            result +=(cnt[i]*(cnt[i]-1))/2;
        }
    }
    cout << result;
}