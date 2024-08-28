#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int INF = 1e9;
vector<pair<int,int>> graph[1001];
int N, M, X, s, e, t, temp, ans = 0;
int dijkstra(int start, int end){
    int dis[1001];
    int curnode, curdis, nextnode, nextdis;
    priority_queue<pair<int,int>> pq;
    for(int i = 1; i <= N; i++){
        dis[i] = INF;
    }
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
            if(nextdis<dis[nextnode]){
                pq.push(make_pair(-nextdis, nextnode));
                dis[nextnode] = nextdis;
            }
        }
    }
    return dis[end];
}




int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N >> M >> X;
    for(int i = 0; i<M; i++){
        cin >> s >> e >> t;
        graph[s].push_back(make_pair(e, t));
    }
    for(int i = 1; i<=N; i++){
        temp = dijkstra(i, X) + dijkstra(X, i);
        if(temp>ans){
            ans = temp;
        }
    }
    cout << ans;
}