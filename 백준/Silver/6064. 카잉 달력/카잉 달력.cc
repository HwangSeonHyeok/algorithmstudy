#include <iostream> 
using namespace std;
int gcd(int a, int b){
    int c;
    while(b!=0){
        c= a%b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b){
    return a*b/gcd(a,b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        int m, n, x, y, ans = -1;
        cin >> m >> n >> x >> y;
        int maximum = lcm(m,n);
        if(y==n){
            for(int i = x; i<=maximum; i+=m){
                if(i%n == 0){
                    ans = i;
                    break;
                }
            }    
        }
        else{
            for(int i = x; i<=maximum; i+=m){
                if(i%n == y){
                    ans = i;
                    break;
                }
            }
        }
        cout << ans << '\n';

    }


    
}