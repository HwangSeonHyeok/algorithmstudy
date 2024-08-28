#include <iostream>
using namespace std;

int dp[1000001] = {0,};
int fiboarr[41];
int fibonacci(int n) {
    if (n == 0) {
        fiboarr[0]=0;
        fiboarr[1]=1;
        return 0;
    } else if (n == 1) {
        fiboarr[0] = 0;
        fiboarr[1] = 1;
        return 1;
    }
    else if(fiboarr[n]!=0){
        return fiboarr[n];
    }
    else {
        fiboarr[n] = fibonacci(n-1)+ fibonacci(n-2);
        return fiboarr[n];
    }
}
int main(){
    int  num;
    dp[1] = 1;
    dp[2] = 2;
    cin >> num;
    for(int i = 3; i <= num; i++){
        dp[i] = (dp[i-1] +dp[i-2])%15746;
    }
    printf("%d", dp[num]);
}