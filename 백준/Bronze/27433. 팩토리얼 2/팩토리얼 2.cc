#include <iostream> 
using namespace std;

long long factorial(long long num, long long n){
    if(n==0)
        return num;
    else{
        return factorial(n*num,n-1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, result;
    cin >> n;
    result = factorial(1, n);
    cout << result;

}