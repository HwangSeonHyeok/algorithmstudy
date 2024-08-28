#include<iostream>
#include<queue>
using namespace std;
int graph[1001][1010] = {0};
int M, N, ans = -1;
queue<pair<int,int>>q;
void bfs(){
    int x, y, curdis;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        curdis = graph[x][y];
        if(y>0){
            if(graph[x][y-1]==0){
                q.push(make_pair(x,y-1));
                graph[x][y-1] = curdis + 1; 
            }
        }
        if(x>0){
            if(graph[x-1][y]==0){
                q.push(make_pair(x-1,y));
                graph[x-1][y] = curdis + 1;
            }
        }
        if(x<M-1){
            if(graph[x+1][y]==0){
                q.push(make_pair(x+1,y));
                graph[x+1][y] = curdis + 1;
            }
        }
        if(y<N-1){
            if(graph[x][y+1]==0){
                q.push(make_pair(x,y+1));
                graph[x][y+1] = curdis + 1;
            }
        }
        if(curdis>ans){
            ans = curdis;
        }

    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num;
    cin >> M >> N;
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            cin >> num;
            graph[j][i] = num;
            if(num==1){
                q.push(make_pair(j,i));
            }
        }        
    }
    bfs();
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            if(graph[j][i]==0){
                cout << -1;
                return 0;
            }
        }        
    }
    cout << ans-1;
}