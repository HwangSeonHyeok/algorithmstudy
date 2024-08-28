#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector<int> graph[20001];
int visited[20001] = {0};
int V;
queue<int>q;
bool bfs(int start){
    int current;
    q.push(start);
    visited[start] = 1;
    while(!q.empty()){
        current = q.front();
        q.pop();
        for(int i = 0; i < graph[current].size(); i++){
            if(visited[current]==visited[graph[current][i]]){
                return false;
            }
            if(visited[graph[current][i]]==0){
                q.push(graph[current][i]);
                if(visited[current]==1){
                    visited[graph[current][i]] = 2;
                }
                else if(visited[current] == 2){
                    visited[graph[current][i]] = 1;
                }
            }
        }

    }
    return true;
}
void reset(){
    q = queue<int>();
    for(int i = 0; i<=V; i++){
        graph[i].clear();
        visited[i] = 0;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int K, E, u, v;
    bool ans = true;
    cin >> K;
    for(int i = 0; i < K; i++){
        cin >> V >> E;
        for(int j = 0; j<E; j++){
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u) ;
        }
        for(int i = 1; i<=V; i++){
            if(visited[i]==0){
                ans = bfs(i);
            }
            if(ans == false){
                break;
            }
        }
        if(ans){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
        reset();
    }
}