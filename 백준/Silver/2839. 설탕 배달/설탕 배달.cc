#include <iostream>
using namespace std; 


int main(){
    int n, q = 0, s1 = 5, s2 = 3;
    cin >> n;
    if(n==3 || n==5){
        q = 1;
    }
    else if(n == 4 || n == 7){
        q = -1;
    }
    else{
        if(n % 5 ==0){
            q = n/5;
        }

        else if(n % 5 == 1){
            q = (n/5 - 1) + 2;

        }
        else if(n % 5 == 2){
            q = (n/5 - 2) + 4;
        }
        
        else if(n % 5 == 3){
            q = n/5 + 1;

        }

        else{
            q= (n/5 - 1) +3;
        }
    }
    cout << q;

}