#include <iostream>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(1){
        int a, b, c,maxlen;
        cin >> a >> b >> c;
        maxlen = max(a,max(b,c));
        if(a==0)break;
        if(maxlen >= a+b+c-maxlen){
            cout << "Invalid\n";
        }
        else if(a == b && a == c && b == c){
            cout<< "Equilateral\n";
        }
        else if(a != b && a != c && b != c){
            cout<< "Scalene\n";
        }else{
            cout << "Isosceles\n";
        }
    }
    
}