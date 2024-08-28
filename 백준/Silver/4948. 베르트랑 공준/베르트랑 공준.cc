#include<iostream>
using namespace std; 

int main(){
    int n, m;
    while(1){
        scanf("%d",&n);
        if (n == 0) return 0;
        int count = 0;
        m = n*2;
        if(m != 1){
            bool* PrimeArray = new bool[m+1];
            for(long long i = 2; i <= m; i++){
                PrimeArray[i] = true;
            }
            for(long long i = 2; i * i <= m; i++){
                if(PrimeArray[i]){
                    for (long long j = i * i; j <= m; j += i){
                        PrimeArray[j] = false;
                    }
                }
            }
            PrimeArray[1] = false;
            for(long long i = n+1; i < m+1; i++){
                if(PrimeArray[i]){
                    count++;
                }
        
            }
        }
        printf("%d\n", count);
    }

}