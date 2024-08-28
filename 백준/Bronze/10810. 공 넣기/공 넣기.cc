#include <iostream>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, bucket[101] = {0,};
    cin >> n >> m;
    for(int i = 0; i<m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        for(int j = a; j<=b; j++){
            bucket[j] = c;
        }
    }
    for(int i = 1; i<=n;i++){
        cout<< bucket[i]<<" ";
    }
    
}