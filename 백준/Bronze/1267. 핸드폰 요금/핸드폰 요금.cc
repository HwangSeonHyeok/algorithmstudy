#include <iostream>
#include <algorithm>
using namespace std;



int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, Y = 0, M = 0, num;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> num;
        Y += ((num/30)+1) * 10;
        M += ((num/60)+1) * 15;
    }
    if(Y<M){
        cout << "Y " << Y;
    }
    else if(M<Y){
        cout << "M " << M;
    }
    else{
        cout << "Y M " << Y;
    }


    
}