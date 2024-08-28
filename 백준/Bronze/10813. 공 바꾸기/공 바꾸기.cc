#include <iostream>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, bucket[101] = {0,};
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        bucket[i] = i;
    }
    for(int i = 0; i<m; i++){
        int a,b,tmp;
        cin >> a >> b;
        tmp = bucket[a];
        bucket[a] = bucket[b];
        bucket[b] = tmp;
    }
    for(int i = 1; i<=n;i++){
        cout<< bucket[i]<<" ";
    }
    
}