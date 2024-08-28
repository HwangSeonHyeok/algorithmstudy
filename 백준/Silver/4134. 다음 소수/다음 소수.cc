#include <iostream>
#include<cmath>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a;
    cin >> a;
    for(int i = 0; i<a; i++){
        long long n;
        cin >> n;
        while(1){
            bool isprime = true;
            for(long long j = 2; j<=sqrt(n); j++){
                if(n%j==0){
                    isprime = false;
                    break;
                }
            }
            if(isprime){
                break;
            }
            else{
                n++;
            }
        }
        if(n==0||n==1){
            cout << 2 <<'\n';
        }else{
            cout << n << '\n';
        }
    }
    
    
}