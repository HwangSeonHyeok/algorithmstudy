#include <iostream>
using namespace std;
bool cus[101] = {0};

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, num, cnt = 0;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> num;
        if(cus[num]){
            cnt++;
        }
        else{
            cus[num] = true;
        }
    }
    cout << cnt;

}