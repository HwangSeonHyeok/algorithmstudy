#include <iostream> 
#include<queue>
using namespace std;
int graph[1001][1001] = {0,};
int ans[1001][1001] = {0,};
bool visited[1001][1001] = {0,};
int iplus[4] = {1,-1,0,0};
int jplus[4] = {0,0,1,-1};
int n,m;
void bfs(int starti, int startj){
    queue<pair<int,int>> q;
    q.push(make_pair(starti,startj));
    visited[starti][startj] = true;
    while(!q.empty()){
        int currenti = q.front().first;
        int currentj = q.front().second;
        int currentdist = ans[currenti][currentj];
        q.pop();
        for(int k = 0; k<4;k++){
            int nexti = currenti + iplus[k],nextj = currentj + jplus[k];
            if(nexti>=0 && nextj>=0&&nexti<n&&nextj<m){
                if(!visited[nexti][nextj]&&(graph[nexti][nextj]==1)){
                    q.push(make_pair(nexti,nextj));
                    visited[nexti][nextj]=1;
                    ans[nexti][nextj] = currentdist+1;
                }

            }
        }


    }
    
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int starti, startj;
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cin >> graph[i][j];
            if(graph[i][j]==2){
                starti = i;
                startj = j; 
            }
        }
    }
    bfs(starti, startj);
    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            if(ans[i][j]==0 && graph[i][j]==1){
                cout << -1 << ' ';
            }
            else
                cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
    
    
    
}