#include<iostream>
#include<queue>
using namespace std;
int graph[300][300] = {0};
int I, desx, desy;
int addx[8] = {2, 2, -2, -2, 1, -1, 1, -1}, addy[8] = {1, -1, 1,-1, 2, 2, -2, -2};
queue<pair<int,int>>q;
void bfs(int startx, int starty){
    int x, y, nextx, nexty;
    q.push(make_pair(startx, starty));
    graph[startx][starty] = 1;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = 0; i < 8; i++){
            nextx = x + addx[i];
            nexty = y + addy[i];
            if(nextx>=0&&nextx<I&&nexty>=0&&nexty<I){
                if(graph[nextx][nexty]==0){
                    q.push(make_pair(nextx,nexty));
                    graph[nextx][nexty] = graph[x][y] + 1;
                    if(nextx == desx && nexty == desy){
                        return;
                    }
                }
            }
        }
    }
}
void reset(){
    q = queue<pair<int,int>>();
    for(int i = 0; i<I; i++){
        for(int j = 0; j<I; j++){
            graph[j][i] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T, kx, ky;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> I;
        cin >> kx >> ky;
        cin >> desx >> desy;
        bfs(kx,ky);
        cout << graph[desx][desy]-1 << '\n';
        reset();
    }
}