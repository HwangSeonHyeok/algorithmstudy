#include <iostream>
using namespace std; 
int han(int a){
    if(a<100) return a;

    int f = 0, s= 0, t=0, count = 99;
    for(int i = 100; i <= a; i++){
    f = i%10;
    s = i/10 %10;
    t = i/100;
    if((t-s) == (s-f)){
        count++;
    }

    }
        
    return count;
}
int main(){
    int n;
    cin >> n;
    cout << han(n);

}