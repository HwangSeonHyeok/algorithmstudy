#include<iostream>
#include<vector>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, ans;
    vector<int> prime;
    cin >> n;

    bool* PrimeArray = new bool[123];
    for(long long i = 2; i <= 122; i++){
        PrimeArray[i] = true;
    }
    for(long long i = 2; i * i <= 122; i++){
        if(PrimeArray[i]){
            for (long long j = i * i; j <= 122; j += i){
                PrimeArray[j] = false;
            }
        }
    }
    PrimeArray[1] = false;
    for(long long i = 2; i < 122; i++){
        if(PrimeArray[i]){
            prime.push_back(i);
        }
    }
    for(int i = 1; i<prime.size();i++){
        ans = prime[i]*prime[i-1];
        if(ans>n){
            cout<<ans;
            break;
        }
    }
}