#include<iostream>
using namespace std;
int a = 1000000007;
long long factorial[4000001];
long long x_after, x_before, temp, q;

void euclid(long long p, long long b){
    if(p%b > 0){
        euclid(b, p%b);
        temp = x_after;
        x_after = x_before - (p/b)*x_after;
        x_before = temp;
    }
    else {
        x_after = 1;
        x_before = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long n, k, ans;
    cin >> n >> k;
    factorial[0] = 1;
    factorial[1] = 1;
    for(int i = 2; i<=n; i++){
        factorial[i] = (factorial[i-1] * i) % a;
    }
    long long fack = (factorial[k] * factorial[n-k])%a;
    euclid(a,fack);
    ans = ((factorial[n]%a) * (x_after%a)) % a;
    if(ans<0){
        ans += a;
    }
    cout << ans;

}
