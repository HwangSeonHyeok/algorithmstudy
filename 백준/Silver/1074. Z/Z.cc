#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long solve(long long y, long long x, long long size){
    long long cut = pow(2,size);
    if(cut==0){
        return 0;
    }
    if(y<=cut&&x<=cut){
        return solve(y,x,size-1);
    }else if(y>cut&&x<=cut){
        return (2*pow(cut,2))+solve(y-cut, x, size-1);
    }else if(y<=cut&&x>cut){
        return (pow(cut,2))+solve(y, x-cut, size-1);
    }else if(y>cut&&x>cut){
        return (3*pow(cut,2))+solve(y-cut, x-cut, size-1);
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, r, c;
    cin >> n >> r >> c;
    long long answer = solve(r+1,c+1,n-1);
    cout << answer;

}

