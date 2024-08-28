#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


char campus[601][601] = {0,};
bool visited[601][601] = {0,};
int n,m,cnt = 0;
int dirx[4] = {1,0,-1,0};
int diry[4] = {0,1,0,-1};

void dfs(int x, int y){
    visited[y][x] = 1;
    if(campus[y][x]=='X'){
        return;
    }
    if(campus[y][x]=='P'){ 
        cnt++;
    }
    
    for(int i = 0; i<4; i++){
        int nextx, nexty;
        nextx = x+dirx[i];
        nexty = y+diry[i];
        if(nextx>=0&&nextx<m&&nexty>=0&&nexty<n&&!visited[nexty][nextx]){
            dfs(nextx,nexty);
        }

    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, y;
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        for(int j=0; j<m;j++){
            cin >> campus[i][j];
            if(campus[i][j]=='I'){
                x=j;
                y=i;
            }
        }
    }
    dfs(x,y);
    if(cnt==0){
        cout << "TT";
    }else{
        cout << cnt;
    }
    
    
}

