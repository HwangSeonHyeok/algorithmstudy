#include <iostream> 

using namespace std;
int income[1500001] = {0,};
int booking[1500001][2] = {0,};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i<=n;i++){
        cin >> booking[i][0] >> booking[i][1];
    }
    for(int i = 1; i<=n; i++){
        int end = i+booking[i][0]-1;
        if(end<=n){
            income[end] = max(income[i-1]+booking[i][1],income[end]);
        }
        income[i] = max(income[i-1],income[i]);
    }
    cout << income[n];
    
    
    
}