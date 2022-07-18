#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int INF = 1e9;
long long disarr[501];
vector<int> des;
vector<pair<pair<int,int>,int>> edge;
int N, M;


bool bellmanford(int start){
    long long curnode, des, dis;
    disarr[start] = 0;
    for(int i = 0; i<N-1; i++){
        for(int j = 0; j<edge.size();j++){
            curnode = edge[j].first.first;
            des = edge[j].first.second;
            dis = edge[j].second;
            if (disarr[curnode] == INF) continue;
            if(disarr[curnode]+dis<disarr[des]){
                disarr[des] = disarr[curnode]+dis;
            }
        }

    }
    for(int i = 0; i<edge.size();i++){
            curnode = edge[i].first.first;
            des = edge[i].first.second;
            dis = edge[i].second;
            if (disarr[curnode] == INF) continue;
            if(disarr[curnode]+dis<disarr[des]){
                return false;
            }
        }
    return true;

}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, B, C;
    cin >> N >> M;
    for(int i = 0; i< M; i++){
        cin >> A >> B >> C;
        edge.push_back(make_pair(make_pair(A,B),C));
    }
    for(int i = 0; i<=N; i++){
        disarr[i] = INF;
    }
    if(bellmanford(1)){
        for(int i = 2; i<=N; i++){
            if (disarr[i]==INF){
                cout << -1 << '\n';
            }
            else
                cout << disarr[i] << '\n';
        }
    }
    else{
        cout << -1;
    }

}