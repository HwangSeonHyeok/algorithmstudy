#include<algorithm>
#include <iostream>
using namespace std;

int main(){
    int n, des, ans = 0;
    scanf("%d %d", &n, &des);
    int coin[n];
    for(int  i = 0; i < n; i++){
        cin >> coin[i];
    }
    for(int i = n-1; i>=0; i--){
        if(coin[i]<=des){
            ans += (des/coin[i]);
            des = (des%coin[i]);
        }
    }

    
    
    cout << ans;


}
