#include <iostream> 
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x,ans = 0;
    cin >> x;
    while(x>0){
        if(x%2==1){
            ans++;
        }
        x/=2;
    }
    cout << ans;


    
}