#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int INF = 1e9;
int dis[1001];
int N, M, W;
vector<pair<int,int>> graph[1001];
void dijkstra(int start){
    int curnode, curdis, nextnode, nextdis;
    priority_queue<pair<int,int>> pq;
    dis[start] = 0;
    pq.push(make_pair(0,start));
    while(!pq.empty()){
        curdis = -pq.top().first;
        curnode = pq.top().second;
        pq.pop();
        if(dis[curnode]<curdis) continue;
        for(int i = 0; i<graph[curnode].size();i++){
            nextnode = graph[curnode][i].first;
            nextdis = curdis + graph[curnode][i].second;
            if(nextdis < dis[nextnode]){
                pq.push(make_pair(-nextdis, nextnode));
                dis[nextnode] = nextdis;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int s, e, c, S,E;
    cin >> N;
    for(int i = 1; i<=N; i++){
        dis[i] = INF;
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> s >> e >> c;
        graph[s].push_back(make_pair(e,c));
    }
    cin >> S >> E;
    dijkstra(S);
    cout << dis[E];
}