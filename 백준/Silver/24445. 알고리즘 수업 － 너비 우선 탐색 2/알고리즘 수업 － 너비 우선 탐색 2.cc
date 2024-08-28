#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> *graph =new vector<int>[100001];
int isVisited[100001] = {0,};
int cnt = 0;
queue<int> q;
bool cmp(int x, int y){
    if(x>y){
        return true;
    }else
        return false;
}
void bfs(int current){
    cnt++;
    isVisited[current] = cnt;
    q.push(current);
    while(!q.empty()){
        int next = q.front();
        q.pop();
        for(int i = 0; i<graph[next].size();i++){
            if(isVisited[graph[next][i]]==0){
                cnt++;
                isVisited[graph[next][i]]=cnt;
                q.push(graph[next][i]);
            }
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, r;
    cin >> n >> m >> r;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i = 0; i<=n; i++){
        sort(graph[i].begin(),graph[i].end(),cmp);
    }
    bfs(r);
    for(int i = 1; i<=n; i++){
        cout << isVisited[i] << '\n';
    }
}