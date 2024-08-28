#include<iostream>
using namespace std; 

int main(){
    int T, n, a, b;
    scanf("%d", &T);
    for(int l = 0; l<T; l++){
        scanf("%d",&n);
        if (n == 0) return 0;
        
        if(n != 1){
            bool* PrimeArray = new bool[n+1];
            for(long long i = 2; i <= n; i++){
                PrimeArray[i] = true;
            }
            for(long long i = 2; i * i <= n; i++){
                if(PrimeArray[i]){
                    for (long long j = i * i; j <= n; j += i){
                        PrimeArray[j] = false;
                    }
                }
            }
            PrimeArray[1] = false;
            for(long long i = 2; i < (n/2)+1; i++){
                if(PrimeArray[i]){
                    if(PrimeArray[n-i]){
                        a = i;
                        b = n-i;
                    }
                }
        
            }
            printf("%d %d\n", a, b);
        }
    }

}