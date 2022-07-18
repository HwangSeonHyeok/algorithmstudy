#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
bool graph[1001][1001] = {0};
bool isMarked[1001]= {0};
queue<int> q;
int V,N;
void dfs(int current){
    isMarked[current] = true;
    cout << current << " ";
    for(int i = 0; i<=N; i++){
        if(graph[current][i]&& !isMarked[i]){
            dfs(i);
        }
    }
}
void bfs(int start){
    int current;
    isMarked[V] = true;
    cout << start << " ";
    q.push(start);
    while(!q.empty()){
        current = q.front();
        q.pop();
        for(int i = 0; i<=N; i++){
            if(graph[current][i] && !isMarked[i]){
                isMarked[i] = true;
                q.push(i);
                cout<<i<<" ";
            }
        }

    }

}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int M, a, b;
    cin >> N >> M >> V;
    for(int i = 0; i<M; i++){
        cin >> a >> b;
        graph[a][b] = true;
        graph[b][a] = true;
    }
    dfs(V);
    cout << "\n";
    for(int i = 0; i<=N;i++){
        isMarked[i] = false;
    }
    bfs(V);
}