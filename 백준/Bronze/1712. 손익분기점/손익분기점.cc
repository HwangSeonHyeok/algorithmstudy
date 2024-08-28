#include <iostream>
using namespace std; 
int main(){
    int a,b,c,d;
    cin >> a >> b >> c;
    if(b>=c){
        cout << -1;
    }
    else{
        d = a/(c-b) + 1;
        cout << d;
    }
}