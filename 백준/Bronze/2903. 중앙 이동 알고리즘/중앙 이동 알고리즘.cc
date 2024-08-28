#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    long long point = 2;
    cin >> n;
    for(int i = 0; i<n; i++){
        point += pow(2,i);
    }
    cout << point*point;
}