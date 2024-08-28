#include<iostream>
#include<queue>
using namespace std;
int graph[101][101][101] = {0};
int M, N, H, ans = 0;
queue<pair<pair<int,int>,int>> q;
void bfs(){
    int x, y, z, curdis;
    while(!q.empty()){
        x = q.front().first.first;
        y = q.front().first.second;
        z=q.front().second;
        q.pop();
        curdis = graph[x][y][z];
        if(y>0){
            if(graph[x][y-1][z]==0){
                q.push(make_pair(make_pair(x,y-1),z));
                graph[x][y-1][z] = curdis + 1; 
            }
        }
        if(x>0){
            if(graph[x-1][y][z]==0){
                q.push(make_pair(make_pair(x-1,y),z));
                graph[x-1][y][z] = curdis + 1;
            }
        }
        if(z>0){
            if(graph[x][y][z-1]==0){
                q.push(make_pair(make_pair(x,y),z-1));
                graph[x][y][z-1] = curdis + 1;
            }
        }
        if(x<M-1){
            if(graph[x+1][y][z]==0){
                q.push(make_pair(make_pair(x+1,y),z));
                graph[x+1][y][z] = curdis + 1;
            }
        }
        if(y<N-1){
            if(graph[x][y+1][z]==0){
                q.push(make_pair(make_pair(x,y+1),z));
                graph[x][y+1][z] = curdis + 1;
            }
        }
        if(z<H-1){
            if(graph[x][y][z+1]==0){
                q.push(make_pair(make_pair(x,y),z+1));
                graph[x][y][z+1] = curdis + 1;
            }
        }

    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num;
    cin >> M >> N>> H;
    for (int k = 0; k<H;k++){
        for(int i = 0; i<N; i++){
            for(int j = 0; j<M; j++){
                cin >> num;
                graph[j][i][k] = num;
                if(num==1){
                    q.push(make_pair(make_pair(j,i),k));
                }
            }        
        }
    }
    bfs();
    for(int k = 0; k<H;k++){
        for(int i = 0; i<N; i++){
            for(int j = 0; j<M; j++){
                if(graph[j][i][k]==0){
                    cout << -1;
                    return 0;
                }
                if(ans<graph[j][i][k]){
                    ans = graph[j][i][k];
                }
            }      
        }
    }
    cout << ans-1;
}