#include <iostream>
using namespace std;

int main(){
    int n, k, result = 1;
    cin >> n >> k;
    if(k>n){
        result = 0;
    }
    else{
        int a=1;
        for(int i = n; i>k; i--){
            result = result *i;
        }
        for(int i = n-k; i>0; i--){
            a = a*i;
        }
        result = result/a;

    }
    printf("%d", result);
    
    
}