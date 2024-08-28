#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
bool graph[101][101] = {0};
bool visited[101]= {0};
int N;
void dfs(int current){
    visited[current] = true;
    //cout << current << " ";
    for(int i = 0; i<=N; i++){
        if(graph[current][i]&& !visited[i]){
            dfs(i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int lines, a, b, cnt = 0;
    cin >> N;
    cin >> lines;
    for(int i = 0; i<lines; i++){
        cin >> a >> b;
        graph[a][b] = true;
        graph[b][a] = true;
    }
    dfs(1);
    for(int i = 2; i<=N; i++){
        if(visited[i]){
            cnt++;
        }
    }
    cout << cnt;
}