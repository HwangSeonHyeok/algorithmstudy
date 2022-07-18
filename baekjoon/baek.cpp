#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int graph[9][9] = {0};
bool visited[9][9]= {0};
int N, M;
int xarr[4] = {-1, 0, 1, 0};
int yarr[4] = {0, 1, 0, -1};
void bfs(int startx, int starty){
    int currentx, currenty, nextx, nexty;
    visited[startx][starty] = true;
    queue<pair<int,int>> q;
    q.push(make_pair(startx,starty));
    while(!q.empty()){
        currentx = q.front().first;
        currenty = q.front().second;
        q.pop();
        for(int i = 0; i<4; i++){
            nextx = currentx + xarr[i];
            nexty = currenty + yarr[i];
            if(nextx >= M || nexty >= N || nextx < 0 || nexty <0){
                continue;
            }
            if(graph[nextx][nexty] == 0){
                graph[nextx][nexty] = 2;
                visited[nextx][nexty] = true;
                q.push(make_pair(nextx, nexty));
            }
        }

    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int cnt = 0;
    cin >> N >> M;
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            cin >> graph[j][i];
        }
    }
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            if(graph[j][i]==2 && !visited[j][i]){
                bfs(j,i);
            }
        }
    }
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            cout<< graph[j][i] <<' ';
            if(graph[j][i]==0){
                cnt++;
            }
        }
        cout <<'\n';
    }
    cout << cnt;

    
}