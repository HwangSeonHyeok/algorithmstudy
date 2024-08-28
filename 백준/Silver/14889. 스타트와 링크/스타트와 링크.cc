#include <iostream>
#include <math.h>
using namespace std;
int n, resulta = 0, resultb = 0, total = 0, balance = 2000;
int stat[20][20] = {0, };
bool team[10] = {0,};
void dfs(int cnt, int num){
    if(cnt == n/2){
        for(int i = 0; i < n; i++){
            if(team[i]){
                for(int j = 0; j < n; j ++){
                    if(team[j]){
                        resulta += stat[i][j];
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            if(!team[i]){
                for(int j = 0; j < n; j ++){
                    if(!team[j]){
                        resultb += stat[i][j];
                    }
                }
            }
        }

        if(abs(resulta -resultb)< balance){ 
            balance = abs(resulta - resultb);

        }
        resulta = 0;
        resultb  = 0;
    }
    for(int i = num; i < n; i++){
        if(!team[i]){
            team[i] = true;
            dfs(cnt+1, i+1);
            team[i] = false;
        }

    }
    
    
    
}

int main(){
    int m;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            cin >> m;
            stat[i][j] = m;
            total += m;
        }
    }
    dfs(0,0);
    cout << balance;
    
}