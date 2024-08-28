#include<iostream>
#include<algorithm>
using namespace std;
//최대공약수 찾는 함수
int gfactor(int a, int b){
    int c, d, factor;
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
    return factor;

}
int main(){
    int n, big, small=1000000001;
    cin>>n;
    int numarr[n];
    for(int i = 0; i<n; i++){
        cin >> numarr[i];
    }
    sort(numarr,numarr+n);
    big = numarr[n-1]-numarr[0];
    for(int i = 0; i<n-1;i++){
        if(small>numarr[i+1]-numarr[i]){
            small = numarr[i+1] - numarr[i];
        }        
        
    }
    int factor = gfactor(big,small);
    for(int i  = 2; i<=factor/2;i++){
        if(factor%i==0){
            printf("%d ", i);
        }
    }
    printf("%d", factor);
}
