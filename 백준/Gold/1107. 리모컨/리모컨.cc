#include <iostream> 
#include<queue>
#include<cmath>
using namespace std;
bool numpad[10] = {1,1,1,1,1,1,1,1,1,1};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, ans;
    cin >> n;
    cin >> m;
    for(int i = 0; i<m;i++){
        int broken;
        cin >> broken;
        numpad[broken] = false;
    }
    ans = abs(n-100);
    for(int i = 0; i<=1000000;i++){
        int cnt = 0,tmp = i;
        bool flag = 1;
        while(1){
            int curnum = tmp%10;
            if(!numpad[curnum]){
                flag = false;
                break;
            }else{
                cnt++;
                if(tmp<10){
                    break;
                }else{
                    tmp/=10;
                }
            }
        }
        if(flag){
            cnt += abs(n-i);
            ans = min(ans,cnt);
        }
    }
    cout << ans;


    
    
}