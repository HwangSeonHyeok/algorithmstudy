#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
bool graph[26][26] = {0};
bool visited[26][26]= {0};
vector<int> blocks;
int N, cnt = 0;
void dfs(int x, int y, int curcnt){
    visited[x][y]=true;
    blocks[curcnt]++;
    if(y>0){
        if(graph[x][y-1]&& !visited[x][y-1]){
            dfs(x,y-1,curcnt);
        }
    }
    if(x>0){
        if(graph[x-1][y]&& !visited[x-1][y]){
            dfs(x-1,y,curcnt);
        }
    }
    if(x<N-1){
        if(graph[x+1][y]&& !visited[x+1][y]){
            dfs(x+1,y,curcnt);
        }
    }
    if(y<N-1){
        if(graph[x][y+1]&& !visited[x][y+1]){
            dfs(x,y+1,curcnt);
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
            graph[i][j] = str[j]-'0';
        }
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(graph[i][j]&&!visited[i][j]){
                blocks.push_back(0);
                dfs(i,j,cnt);
                cnt++;
            }
        }
    }
    sort(blocks.begin(),blocks.end());
    cout<<blocks.size()<<'\n';
    for(int i = 0; i<blocks.size();i++){
        cout << blocks[i] << '\n';
    }
    
}