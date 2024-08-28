#include<iostream>
using namespace std;

int main(){
    int n, m = 0, buf, sum = 0, numsize=0;
    cin >> n;
    buf = n;
    while(buf!=0){
        numsize++;
        buf = buf/10;
    }
    for(int i = n/10; i<n; i++){
        buf = i;
        sum = i;
        for(int j = 0; j<numsize;j++){
            sum += buf%10;
            buf = buf/10;
        }
        if(sum == n){
            m = i;
            break;
        }
        
    }
    
    cout << m;
}