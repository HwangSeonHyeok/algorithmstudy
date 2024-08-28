#include <iostream>
#include <queue>
using namespace std;

int truck[1001] = {0,};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,w,L;
    queue<pair<int,int>> q;
    cin >> n >> w >> L;
    for(int i = 0 ; i<n;i++){
        cin >> truck[i];
    }
    int currentTime = 1, currentWeight = 0, idx = 0;
    q.push(make_pair(truck[idx],currentTime+w));
    currentWeight = truck[idx];
    idx++;
    while(!q.empty()){
        currentTime++;
        if(q.front().second==currentTime){
            currentWeight-=q.front().first;
            q.pop();
            
        }
        if(idx<n && currentWeight+truck[idx]<=L){
            q.push(make_pair(truck[idx],currentTime+w));
            currentWeight += truck[idx];
            idx++;
        }
    }
    cout << currentTime;
   

}