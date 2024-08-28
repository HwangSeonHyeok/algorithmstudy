#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    queue<int> q;
    int N, K;
    cin >> N >> K;
    for(int i = 1; i<=N; i++){
        q.push(i);
    }
    cout << '<';
    for(int i = 1; i<K; i++){
            q.push(q.front());
            q.pop();
    }
    cout << q.front();
    q.pop();
    while(!q.empty()){
        cout << ", ";
        for(int i = 1; i<K; i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();
    }
    cout << '>';
}