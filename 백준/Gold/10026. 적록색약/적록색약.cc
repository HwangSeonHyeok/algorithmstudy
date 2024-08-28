#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string graph[101][101];
bool visited[101][101]= {0};
int N, cnt = 0;
int xarr[4] = {-1, 0, 1, 0};
int yarr[4] = {0, 1, 0, -1};
void dfs(int x, int y){
    visited[x][y]=true;
    for(int i = 0; i<4; i++){
        int nextx = x+xarr[i], nexty = y+yarr[i];
        if(nextx<0 || nexty<0 || nextx>=N || nexty>=N){
            continue;
        }
        if(graph[x][y]==graph[nextx][nexty]&&!visited[nextx][nexty]){
            dfs(nextx, nexty);
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> str;
        for(int j = 0; j<N; j++){
            graph[i][j] = str[j];
        }
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(!visited[i][j]){
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout << cnt << ' ';
    cnt = 0;
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            visited[i][j] = 0;
            if(graph[i][j] == "G"){
                graph[i][j] = "R";
            }
        }
    }
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(!visited[i][j]){
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout << cnt;

    
}