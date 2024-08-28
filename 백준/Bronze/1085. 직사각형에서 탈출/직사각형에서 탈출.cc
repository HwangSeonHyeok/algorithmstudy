#include<iostream>
using namespace std; 

int main(){
    int x, y, w, h, hor, ver;
    cin >> x >> y >> w >> h;
    if (x> w-x) hor = w-x;
    else hor  = x;
    if(y > h-y)ver = h-y;
    else ver = y;
    if(hor < ver) cout << hor;
    else cout << ver;

}