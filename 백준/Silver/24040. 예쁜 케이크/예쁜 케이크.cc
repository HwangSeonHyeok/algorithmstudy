#include<iostream>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long T,N;
    cin>>T;
    for(int i = 0; i<T; i++){
        cin>>N;
        if(N%3==2|| N%9==0){
            cout<<"TAK"<<"\n";
        }
        else
            cout<<"NIE"<<"\n";
    }
    

}