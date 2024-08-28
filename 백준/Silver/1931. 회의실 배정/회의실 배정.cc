#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<pair<int,int>> v;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int s, e;
        cin >> s >> e;
        v.push_back(make_pair(e,s));
    }
    sort(v.begin(),v.end());
    int ans = 0, cur = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i].second>=cur){
            cur = v[i].first;
            ans++;
        }
    }
    cout << ans;
    
}