#include<iostream>
#include<math.h>
#include<string>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int L,mod=1234567891;
    long long r=31,hash=0, pow=1;
    string str;
    cin>>L;
    cin>>str;
    for(int i = 0; i<L;i++){
        pow=1;
        for(int j = 1; j<=i;j++){
            pow*=r;
            pow=pow%mod;
        }
        
        hash+=(str[i]-'a'+1)*pow;
        hash=hash%mod;

    }
    cout<<hash;
    
}