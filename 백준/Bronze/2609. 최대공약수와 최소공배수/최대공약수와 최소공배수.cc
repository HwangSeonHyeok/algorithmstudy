#include<iostream>
using namespace std;
int main(){
    int a, b, c, d,factor, mult;
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
    printf("%d\n", factor);
    printf("%d\n", mult);

}
