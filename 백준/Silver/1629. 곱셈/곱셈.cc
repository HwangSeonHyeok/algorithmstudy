#include<iostream>
using namespace std;

long long cal(long long x, long long y, long long z){
    if(y==0){
        return 1;
    }
    long long temp = cal(x,y/2,z);
    if(y%2==0){
        return (temp*temp)%z;
    }
    else{
        return ((temp*temp)%z*x)%z;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long a,b,c,ans;
    cin >> a >> b >> c;
    ans = cal(a%c,b,c);
    cout<<ans;
}
