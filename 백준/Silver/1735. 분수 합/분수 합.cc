#include <iostream>
using namespace std;

int gcd(int a, int b){
    int c;
    while(b!=0){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,d,lcm,numerator,denominator;
    cin >> a >> b;
    cin >> c >> d;
    numerator = a*d+c*b;
    denominator = b*d;
    lcm = gcd(numerator,denominator);
    numerator /= lcm;
    denominator /= lcm;

    cout << numerator<< ' ' << denominator;
    

    
}