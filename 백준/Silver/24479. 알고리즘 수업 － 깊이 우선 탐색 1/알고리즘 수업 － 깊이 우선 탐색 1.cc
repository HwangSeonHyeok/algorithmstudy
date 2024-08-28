#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> *graph =new vector<int>[100001];
int isVisited[100001] = {0,};
int cnt = 0;
void dfs(int current){
    if(isVisited[current] != 0){
        return;
    }
    cnt++;
    isVisited[current] = cnt;
    for(int i = 0; i< graph[current].size(); i++){
        if(isVisited[graph[current][i]]==0)
            dfs(graph[current][i]);
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
    for(int i = 0; i<n; i++){
        sort(graph[i].begin(),graph[i].end());
    }
    dfs(r);
    for(int i = 1; i<=n; i++){
        cout << isVisited[i] << '\n';
    }
}