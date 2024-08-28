#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, B, cnt = 0;
    cin >> A >> B;
    while(1){
        cnt++;
        if(A==B){
            cout << cnt;
            return 0;
        }
        else if(A>B){
            cout << -1;
            return 0;
        }
        if((B%10)==1){
            B /= 10;
        }
        else if(B%2==0){
            B /= 2;
        }
        else{
            cout << -1;
            return 0;
        }
    }
}