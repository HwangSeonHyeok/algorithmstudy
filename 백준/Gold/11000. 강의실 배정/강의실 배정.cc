#include <iostream> 
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;



bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first==b.first){
        return a.second < b.second;
    }else{
        return a.first<b.first;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector<pair<int,int>> lecture;
    priority_queue<int> q;
    
    cin >> n;
    for(int i = 0;i<n;i++){
        int s, e;
        cin >> s >> e;
        lecture.push_back(make_pair(s,e));
    }
    sort(lecture.begin(),lecture.end(),cmp);

    int ans = 0;
    q.push(0);
    for(int i = 0; i<n;i++){
        int s = lecture[i].first, e = lecture[i].second;
        int time =-q.top(); 
        if(time<=s){
            q.pop();
            q.push(-e);
        }else{
            q.push(-e);
        }
        if(q.size()>ans)
            ans = q.size();
    }
    cout << ans;
    
    
}