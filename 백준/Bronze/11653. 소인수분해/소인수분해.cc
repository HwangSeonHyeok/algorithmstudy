#include<iostream>
using namespace std; 
int main(){
    int n, n2;
    cin >> n;
    if(n == 1)
    return 0;
    else{
        for(int i = 2; i < n+1; i++){
           if(n%i ==0){
               cout << i << endl;
               n = n/i;
               i = 1;
           } 
            
        }
    }
}