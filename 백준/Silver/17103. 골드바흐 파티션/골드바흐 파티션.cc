#include <iostream>
using namespace std;
bool isPrime[1000001] = {false,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    for(int i = 2; i<1000001;i++){
        isPrime[i] = true;
    }
    for(int i = 2; i<1000001;i++){
        if(isPrime[i]){
            for(int j = 2; i*j<1000001;j++){
                isPrime[i*j] = false;
            }
        }
    }
    cin >> t;
    for(int i = 0; i<t; i++){
        int n, cnt = 0;
        cin >> n;
        for(int j = 0; j<=n/2;j++){
            if(isPrime[j]&&isPrime[n-j]){
                cnt++;
            }
        }
        cout << cnt << '\n';
        
    }
    
    
}