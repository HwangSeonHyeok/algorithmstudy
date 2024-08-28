#include <iostream>
#include <vector>
#include <map>
using namespace std;


int num[1000001] = {0,};
int ans[1000001] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> num[i];
    }
    ans[n] = -1;
    for(int i = n-1; i>=1; i--){
        if(num[i]==num[i+1]){
            ans[i] = ans[i+1];
        }else{
            ans[i] = i+1;
        }
    }
    for(int i = 1; i<=n; i++){
        cout << ans[i] << ' ';
    }

}