#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int graph[101] = {0,};
int isVisited[101] = {0,};
bool isSpecial[101] = {0,};
queue<int> q;
void salbfs(int start){
    int cnt = 0;
    isVisited[start] = cnt;
    q.push(start);
    while(!q.empty()){
        int current = q.front();
        q.pop();
        if(current==100){
            return;
        }
        for(int i = 1; i<7;i++){
            int next = current+i;
            if(graph[current+i]!=0)
                next = graph[current+i];
            if(isVisited[next]==0){
                isVisited[next]=isVisited[current]+1;
                q.push(next);
            }
            if(next==100)
                return;
        }
        
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n+m; i++){
        int u, v;
        cin >> u >> v;
        graph[u] = v;
    }
    salbfs(1);
    cout << isVisited[100];
}