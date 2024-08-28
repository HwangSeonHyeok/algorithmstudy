#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int N, E;
int INF = 1e9;
int dis[801];
int dis2[801];
vector<pair<int,int>> graph[801];


void dijkstra(int start){
    int curnode, curdis, nextnode, nextdis;
    priority_queue<pair<int,int>> pq;
    dis[start] = 0;
    pq.push(make_pair(0,start));
    while(!pq.empty()){
        curdis = -pq.top().first;
        curnode = pq.top().second;
        pq.pop();
        
        for(int i = 0; i<graph[curnode].size();i++){
            nextnode = graph[curnode][i].first;
            nextdis = curdis + graph[curnode][i].second;
            if(nextdis<dis[nextnode]){
                pq.push(make_pair(-nextdis, nextnode));
                dis[nextnode] = nextdis;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b, c, v1, v2, ans1, ans2, start2, des2;
    cin >> N >> E;
    for(int i = 0; i<E; i++){
        cin >> a >> b >> c;
        graph[a].push_back(make_pair(b,c));
        graph[b].push_back(make_pair(a,c));
    }
    cin >> v1 >> v2;
    for(int i = 0; i<=N; i++){
        dis[i] = INF;
    }
    dijkstra(1);
    ans1 = dis[v1];
    ans2 = dis[v2];
    if(ans1>=INF||ans2>=INF){
        cout << -1;
        return 0;
    }
    for(int i = 0; i<=N; i++){
        dis[i] = INF;
    }
    dijkstra(v1);
    ans1 += dis[v2];
    ans2 += dis[N];
    for(int i = 0; i<=N; i++){
        dis[i] = INF;
    }
    dijkstra(v2);
    ans2 += dis[v1];
    ans1 += dis[N];
    if(ans1>=INF&&ans2>=INF){
        cout << -1;
        return 0;
    }
    if(ans1>ans2){
        cout << ans2;
    }
    else{
        cout << ans1;
    }
    return 0;


}