//주사위 세개
#include<iostream>
using namespace std;

int main(){
    int num, max=0;
    int result[7] = {0,};
    for(int i = 0; i < 3; i++){
        cin >> num;
        result[num]++;
    }
    for(int i = 1; i < 7; i++){
        if(result[i]==1){
            max=i;
        }
        else if(result[i]==2){
            cout<<i*100+1000;
            return 0;
        }
        else if(result[i]==3){
            cout<<i*1000+10000;
            return 0;
        }
    }
    cout<< max*100;

}