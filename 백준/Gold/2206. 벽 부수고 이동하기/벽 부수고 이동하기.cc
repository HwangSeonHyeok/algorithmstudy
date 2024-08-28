#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;
bool graph[1001][1001] = {0};
int dis1[1001][1001] = {0};
int dis2[1001][1001] = {0};
int N,M;
queue<pair<pair<int,int>,bool>>q;
void bfs(){
    int x, y;
    bool breaked;
    q.push(make_pair(make_pair(0,0),0));
    dis1[0][0] = 1;
    while(!q.empty()){
        x = q.front().first.first;
        y = q.front().first.second;
        breaked = q.front().second;
        q.pop();
        if(breaked){
            if(y>0){
                if(graph[x][y-1]==false&& dis2[x][y-1]==0){
                    q.push(make_pair(make_pair(x,y-1),1));
                    dis2[x][y-1] = dis2[x][y] + 1; 
                }
            }
            if(x>0){
                if(graph[x-1][y]==false&& dis2[x-1][y]==0){
                    q.push(make_pair(make_pair(x-1,y),1));
                    dis2[x-1][y] = dis2[x][y] + 1;
                }
            }
            if(x<M-1){
                if(graph[x+1][y]==false&& dis2[x+1][y]==0){
                    q.push(make_pair(make_pair(x+1,y),1));
                    dis2[x+1][y] = dis2[x][y] + 1;
                }
            }
            if(y<N-1){
                if(graph[x][y+1]==false&& dis2[x][y+1]==0){
                    q.push(make_pair(make_pair(x,y+1),1));
                    dis2[x][y+1] = dis2[x][y] + 1;
                }
            }
        }
        else{
            if(y>0){
                if(graph[x][y-1]==true&& dis2[x][y-1]==0){
                    q.push(make_pair(make_pair(x,y-1),1));
                    dis2[x][y-1] = dis1[x][y] + 1; 
                }
                else if(graph[x][y-1]==false&& dis1[x][y-1]==0){
                    q.push(make_pair(make_pair(x,y-1),0));
                    dis1[x][y-1] = dis1[x][y] + 1; 
                }
            }
            if(x>0){
                if(graph[x-1][y]==true&& dis2[x-1][y]==0){
                    q.push(make_pair(make_pair(x-1,y),1));
                    dis2[x-1][y] = dis1[x][y] + 1;
                }
                else if(graph[x-1][y]==false&& dis1[x-1][y]==0){
                    q.push(make_pair(make_pair(x-1,y),0));
                    dis1[x-1][y] = dis1[x][y] + 1;
                }
            }
            if(x<M-1){
                if(graph[x+1][y]==true&& dis2[x+1][y]==0){
                    q.push(make_pair(make_pair(x+1,y),1));
                    dis2[x+1][y] = dis1[x][y] + 1;
                }
                else if(graph[x+1][y]==false&& dis1[x+1][y]==0){
                    q.push(make_pair(make_pair(x+1,y),0));
                    dis1[x+1][y] = dis1[x][y] + 1;
                }
            }
            if(y<N-1){
                if(graph[x][y+1]==true&& dis2[x][y+1]==0){
                    q.push(make_pair(make_pair(x,y+1),1));
                    dis2[x][y+1] = dis1[x][y] + 1;
                }
                else if(graph[x][y+1]==false&& dis1[x][y+1]==0){
                    q.push(make_pair(make_pair(x,y+1),0));
                    dis1[x][y+1] = dis1[x][y] + 1;
                }
            }

        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    int ans = 1000001;
    cin >> N >> M;
    for(int i = 0; i<N; i++){
        cin >> str;
        for(int j = 0; j<M; j++){
            graph[j][i] = str[j] - '0';
        }
    }
    bfs();
    if(dis1[M-1][N-1]==0&&dis2[M-1][N-1]==0){
        cout << -1;
    }
    else{
        if(dis1[M-1][N-1]==0){
            ans = dis2[M-1][N-1];
        }
        else if(dis2[M-1][N-1]==0){
            ans = dis1[M-1][N-1];
        }
        else{
            ans = min(dis1[M-1][N-1],dis2[M-1][N-1]);    
        }
        cout << ans;
    }
}