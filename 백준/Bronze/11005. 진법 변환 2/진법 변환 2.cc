#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int dec, n;
    string result;

    cin >> dec >> n;
    
    while(dec!=0){
        char c;
        int remainder = dec%n;
        if(remainder>=10 && remainder<=35){
            c = 'A'+(remainder-10);
        }else{
            c= '0' + remainder;
        }
        result += c;
        dec /= n;
    }
    reverse(result.begin(),result.end());
    cout << result;
}