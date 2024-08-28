#include<iostream>
using namespace std; 
//에라토스테네스의 체를 써보자
//에라토스테네스의 체 코드는 위키피디아꺼 사용
int main(){
    long long m, n;
    scanf("%lld %lld",&m,&n) ;
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
        for(long long i = m; i < n+1; i++){
            if(PrimeArray[i])
                printf("%d\n", i);
        }
    }
}