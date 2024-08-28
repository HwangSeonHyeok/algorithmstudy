#include<iostream>
using namespace std;
int main(){
    int n,a, b, c, d,factor;
    cin>>n;
    cin>>a;
    for(int i =0; i<n-1; i++){
        cin >> b;
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
        cout<< a/factor <<"/"<<b/factor<<"\n";
    }
}