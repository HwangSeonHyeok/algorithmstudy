#include<iostream>
using namespace std;

int main(){
    int N,F,num;
    cin >> N;
    cin >> F;
    num=N/100*100;
    for(int i = 0; i<100; i++){
        if((num)%F == 0){
            if(num%100<10){
                cout << 0 << num%100;
            }
            else{
                cout << num%100;
            }
            return 0;
            

        }
        num++;
    }
}