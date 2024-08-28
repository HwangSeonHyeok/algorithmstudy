#include <iostream>
using namespace std;

long long gcd(long long a, long long b){
    long long c;
    while(b != 0){
        c= a%b;
        a = b;
        b = c;

    }
    return a;

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a,b;
    cin >> a >> b;
    cout << a*b/gcd(a,b);

    
}