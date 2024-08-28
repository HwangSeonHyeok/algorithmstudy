#include <iostream>
using namespace std;

int fiboarr[41] = {0,};
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
    int t, num;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> num;
        fibonacci(num);
        if(num==0){
            printf("%d %d\n", fiboarr[1], fiboarr[0]);
        }
        else
        printf("%d %d\n", fiboarr[num-1], fiboarr[num]);

    }

    
}