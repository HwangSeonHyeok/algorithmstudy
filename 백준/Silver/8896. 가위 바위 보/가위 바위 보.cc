#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;

    cin >> t;

    for(int i = 0; i<t; i++){
        bool isAlive[11] = {0,};
        int n, alive;
        cin >>n;
        alive = n;
        string s[11];
        for(int j = 1; j<=n;j++){
            cin >> s[j];
            isAlive[j] = true;
        }
        int round = s[1].size();
        for(int j = 0; j<round;j++){
            bool rsp[3] = {0,0,0};
            for(int k = 1; k<=n;k++){
                if(isAlive[k]){
                    if(s[k][j]=='R'){
                        rsp[0]=true;
                    }
                    if(s[k][j]=='S'){
                        rsp[1]=true;
                    }
                    if(s[k][j]=='P'){
                        rsp[2]=true;
                    }
                }
            }
            if(rsp[0]&&rsp[1]&&!rsp[2]){
                for(int k = 1; k<=n;k++){
                    if(s[k][j]=='S'&&isAlive[k]){
                        isAlive[k] = false;
                        alive--;
                    }
                }
            }
            if(rsp[1]&&rsp[2]&&!rsp[0]){
                for(int k = 1; k<=n;k++){
                    if(s[k][j]=='P'&&isAlive[k]){
                        isAlive[k] = false;
                        alive--;
                    }
                }
            }
            if(rsp[2]&&rsp[0]&&!rsp[1]){
                for(int k = 1; k<=n;k++){
                    if(s[k][j]=='R'&&isAlive[k]){
                        isAlive[k] = false;
                        alive--;
                    }
                }
            }
            
            
        }

        if(alive>1){
            cout << 0 << '\n';
        }else{
            for(int j=1;j<=n;j++){
                if(isAlive[j]){
                    cout << j << '\n';
                }
            }
        }



    }

    
    
    
    

    
}