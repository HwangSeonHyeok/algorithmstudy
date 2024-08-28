#include <iostream> 
using namespace std;

long long cnt1 = 0, cnt2 = 0;

long long f[40] = {0,};

long long fib1(int n){
    if(n==1 || n==2){
        cnt1++;
        return 1;
    }else{
        return (fib1(n-1) + fib1(n-2));
    }
}

long long fib2(int n){
    for(int i = 2; i<n;i++){
        f[i] = f[i-1] + f[i-2];
        cnt2++;
    }
    return f[n];

}




int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    f[0]= 1;
    f[1] = 1;
    cin >> n;
    fib1(n);
    fib2(n);
    cout << cnt1 << ' ' << cnt2;


}