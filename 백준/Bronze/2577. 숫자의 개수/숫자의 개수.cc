#include <iostream>
using namespace std; 
int main(){
    int a,b,c,d,n;
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    cin >> a >> b >> c;
    d = a*b*c;
    while(true){
        n=d%10;
        arr[n]++;
        d=d/10;
        if(d==0) break;
    }
    for(int i =0; i<10; i++ ){
        cout << arr[i] << endl;
    }
}