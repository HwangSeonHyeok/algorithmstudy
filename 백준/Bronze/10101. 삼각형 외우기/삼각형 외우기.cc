#include <iostream>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b+c != 180){
        cout << "Error";
    }else if(a == b && a == c && b == c){
        cout << "Equilateral";
    }else if(a != b && a != c && b != c){
        cout << "Scalene";
    }else{
        cout << "Isosceles";
    }
    
}