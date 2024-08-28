#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, f, s, t;
    cin >> a >> b >> c;
    if(a>b){
        f = a;
        s = b;
    }else{
        f = b;
        s = a;
    }
    if(s>c){
        t=c;
    }else{
        t=s;
        if(f>c){
            s = c;
        }else{
            s=f;
            f=c;
        }
    }
    cout << t << ' ' <<  s << ' ' << f;
}