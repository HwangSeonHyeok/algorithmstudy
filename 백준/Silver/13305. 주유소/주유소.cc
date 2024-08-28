#include<algorithm>
#include<iostream>
using namespace std;
long long dis[100001], price[100001];

int main(){
    int n;
    long long ans=0;
    long long lowprice = 1000000010;
    cin >> n;
    for(int i = 0; i<n-1; i++){
        scanf("%lld", &dis[i]);
    }
    
    for(int i = 0; i<n; i++){
        scanf("%lld", &price[i]);
    }
    for(int i = 0; i<n-1; i++){
        if(lowprice>price[i]){
            lowprice = price[i];
        } 
        ans = ans +(lowprice*dis[i]);
    }
    
    printf("%lld", ans);

}
