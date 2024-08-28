#include <iostream> 
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

bool visited[300000] ={0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,k,x;
    cin >> n >> m >> k >> x;
    vector<vector<int>> graph(n+1,vector<int>(0,0));
    for(int i = 0; i<m; i++){
        int start, end;
        cin >> start >> end;
        graph[start].push_back(end);
    }
    vector<int> result;
    queue<pair<int,int>> q;
    q.push(make_pair(x,0));
    visited[x] = true;
    while(!q.empty()){
        int curnode, curdis;
        curnode = q.front().first;
        curdis = q.front().second;
        q.pop();
        if(curdis>k){
            break;
        }
        if(curdis == k){
            result.push_back(curnode);
        }

        for(auto nextnode :graph[curnode]){
            if(!visited[nextnode]){
                visited[nextnode] = true;
                q.push(make_pair(nextnode, curdis+1));
            }
        }

    }
    if(result.empty()){
        cout << -1;
    }else{
        sort(result.begin(),result.end());
        for( auto endnode : result){
            cout << endnode << '\n';
        }
    }
    

}