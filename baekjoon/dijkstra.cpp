#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int INF = 1e9;
int dis[2001];
int memodis[2001];
vector<int> des;
vector<pair<int,int>> graph[2001];


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
    int T, n , m, t, s, g, h, a, b, d, x, disg, dish, ansgh, anshg;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> n >> m >> t;
        cin >> s >> g >> h;
        for(int j = 0; j<m; j++){
            cin >> a >> b >> d;
            graph[a].push_back(make_pair(b,d));
            graph[b].push_back(make_pair(a,d));
        }
        for(int k = 0; k <= n; k++){
                dis[k] = INF;
        }
        dijkstra(s);
        disg = dis[g];
        dish = dis[h];
        for(int j = 0; j<t; j++){
            cin >> x;
            memodis[x] = dis[x];
            des.push_back(x);
        
        }
        sort(des.begin(),des.end());
        for(int j = 0; j<des.size(); j++){
            for(int k = 0; k <= n; k++){
                dis[k] = INF;
            }
            dijkstra(g);
            ansgh = disg + dis[h];
            anshg = dish + dis[des[j]];
            for(int k = 0; k < n; k++){
                dis[k] = INF;
            }
            dijkstra(h);
            ansgh += dis[des[j]];
            anshg += dis[g];
            if(ansgh==memodis[des[j]]||anshg==memodis[des[j]]){
                cout << des[j]<< " ";    
            }

        }
        cout << "\n";
        des.clear();
        for(int j = 1; j<=n; j++){
            graph[j].clear();
        }

        
    }

}