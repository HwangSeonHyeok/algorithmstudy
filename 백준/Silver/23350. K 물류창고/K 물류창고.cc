#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
queue<pair<int,int>> que;
stack<pair<int,int>> loaded;
stack<pair<int,int>> temp;
int cost = 0;
int arr[101] = {0};


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, M, P, W, cnt=0;
    cin >> N >> M;
    int i = M;
    for(int i = 0; i<N; i++){
        cin >> P >>W;
        que.push(make_pair(P,W));
        arr[P]++;
    }
    cnt += arr[i];
    while(!que.empty()){
        if(que.front().first==i){
            while(!loaded.empty()){
                if(loaded.top().first==que.front().first&&loaded.top().second < que.front().second){
                    cost += loaded.top().second;
                    temp.push(loaded.top());
                    loaded.pop();
                }
                else{
                    break;
                }
            }
            loaded.push(que.front());
            cost += que.front().second;
            que.pop();
            while(!temp.empty()){
                loaded.push(temp.top());
                cost+=temp.top().second;
                temp.pop();
            }
        }
        else{
            que.push(que.front());
            cost+=que.front().second;
            que.pop();
        }
        if(loaded.size()== cnt){
            i--;
            cnt+=arr[i];
        }
    }
    cout << cost;
    
}