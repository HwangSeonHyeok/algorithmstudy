#include <iostream> 

using namespace std;
bool graph[1001][1001] = {0,};
bool visited[1001] = {0,};
int n;
void dfs(int node){
    visited[node] = true;
    for(int i=1;i<=n;i++ ){
        if(graph[node][i]&&!visited[i]){
             dfs(i);
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m, ans = 0;
    cin >> n >> m;
    for(int i = 0; i<m;i++){
        int u,v;
        cin >> u >> v;
        graph[u][v] = true;
        graph[v][u] = true;
    }
    for(int i = 1; i<=n; i++){
        if(!visited[i]){
            dfs(i);
            ans++;
        }
        
    }
    cout << ans;
    
    
    
}