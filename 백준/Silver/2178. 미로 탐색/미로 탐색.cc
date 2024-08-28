#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;
bool graph[101][101] = {0};
bool visited[101][101]= {0};
int dis[101][101] = {0};
int M, N;
queue<pair<int,int>>q;
void bfs(){
    int x, y;
    visited[0][0] = true;
    q.push(make_pair(0,0));
    dis[0][0] = 1;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        if(y>0){
            if(graph[x][y-1]&& !visited[x][y-1]){
                visited[x][y-1]=true;
                q.push(make_pair(x,y-1));
                dis[x][y-1] = dis[x][y] + 1; 
            }
        }
        if(x>0){
            if(graph[x-1][y]&& !visited[x-1][y]){
                visited[x-1][y]=true;
                q.push(make_pair(x-1,y));
                dis[x-1][y] = dis[x][y] + 1;
            }
        }
        if(x<M-1){
            if(graph[x+1][y]&& !visited[x+1][y]){
                visited[x+1][y]=true;
                q.push(make_pair(x+1,y));
                dis[x+1][y] = dis[x][y] + 1;
            }
        }
        if(y<N-1){
            if(graph[x][y+1]&& !visited[x][y+1]){
                visited[x][y+1]=true;
                q.push(make_pair(x,y+1));
                dis[x][y+1] = dis[x][y] + 1;
            }
        }

    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    cin >> N >> M;
    for(int i = 0; i<N; i++){
        cin >> str;
        for(int j = 0; j<M; j++){
            graph[j][i] = str[j]-'0';
        }
    }
    bfs();
    cout << dis[M-1][N-1];
    
}