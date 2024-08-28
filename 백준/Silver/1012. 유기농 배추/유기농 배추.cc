#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool graph[51][51] = {0};
bool visited[51][51]= {0};
int M, N, K, cnt = 0;
void reset(){
    cnt = 0;
    for(int i = 0; i<=50;i++){
        for(int j=0; j<=50;j++){
            graph[i][j] = 0;
            visited[i][j] = 0;
        }
    }
}
void dfs(int x, int y, int curcnt){
    visited[x][y]=true;
    if(y>0){
        if(graph[x][y-1]&& !visited[x][y-1]){
            dfs(x,y-1,curcnt);
        }
    }
    if(x>0){
        if(graph[x-1][y]&& !visited[x-1][y]){
            dfs(x-1,y,curcnt);
        }
    }
    if(x<M-1){
        if(graph[x+1][y]&& !visited[x+1][y]){
            dfs(x+1,y,curcnt);
        }
    }
    if(y<N-1){
        if(graph[x][y+1]&& !visited[x][y+1]){
            dfs(x,y+1,curcnt);
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T, K, x, y;
    cin >> T;
    for(int i = 0; i<T; i++){
        cin >> M >> N >> K;
        for(int i = 0; i<K; i++){
            cin>>x >> y;
            graph[x][y]=true;
        }
        

        for(int i = 0; i<M; i++){
            for(int j = 0; j<N; j++){
                if(graph[i][j]&&!visited[i][j]){
                    dfs(i,j,cnt);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
        reset();
    }
    
}