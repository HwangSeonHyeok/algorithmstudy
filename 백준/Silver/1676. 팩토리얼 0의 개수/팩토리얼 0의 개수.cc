#include<iostream>
using namespace std;

int main(){
    int n,f=0;
    cin>>n;
    for(int i= 1; i<=n; i++){
        if(i%5==0)f++;
        if(i%25==0)f++;
        if(i%125==0)f++;
    }
    cout << f;
}