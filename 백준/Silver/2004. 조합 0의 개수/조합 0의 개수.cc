#include<iostream>
#include<algorithm>
using namespace std;

long long func(int n, int x){
    long long num=0;
    for(long long i = x; n/i>=1; i*=x){
        num += n/i;
    }
    return num;
}

int main(){
    int n,m;
    long long f=0, t=0;
    cin >> n >> m;
    f = func(n,5)-func(n-m,5)-func(m,5);
    t = func(n,2)-func(n-m,2)-func(m,2);
    cout<<min(f,t);

}