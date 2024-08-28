#include<iostream>
using namespace std;
int main(){
    int n,a, b, c, d,factor, mult;
    cin>>n;
    for(int i = 0; i<n; i++){
        scanf("%d %d", &a, &b);
        if(a>b){
            c = a;
            d = b;
        }
        else{
            c= b;
            d = a;
        }

        while(d!=0){
            factor = d;
            d=c%d;
            c= factor;
        }
        mult = a*b/factor;
        printf("%d\n", mult);
    }

}
