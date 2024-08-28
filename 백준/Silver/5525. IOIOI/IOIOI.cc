#include <iostream> 

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, ans = 0;
    string s;
    cin >> n;
    cin >> m;
    cin >> s;
    bool flag = 0;
    int cnt = 0;
    for(int i = 0; i<m; i++){
        if(s[i]=='I'){
            flag = true;
        }
        while(flag){
            i++;
            if(i>=m)break;
            if(s[i]=='O'&&s[i-1]=='I'){
                continue;
            }
            else if(s[i]=='I'&&s[i-1]=='O'){
                cnt++;
                if(cnt>=n){
                    ans++;
                }
            }else{
                cnt=0;
                i--;
                flag=false;
            }
        }
    }
    cout << ans;
    

}