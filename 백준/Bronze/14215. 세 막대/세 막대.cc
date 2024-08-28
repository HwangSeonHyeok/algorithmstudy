#include <iostream>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, c,maxlen, ans;
    cin >> a >> b >> c;
    maxlen = max(a,max(b,c));
    if(maxlen< a+b+c-maxlen){
        cout << a+b+c;
    }else{
        cout << (a + b + c - maxlen)*2 -1;
    }
    
}