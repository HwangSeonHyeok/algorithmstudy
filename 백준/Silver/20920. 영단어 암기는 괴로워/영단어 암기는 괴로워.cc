#include <iostream> 
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

bool cmp(pair<string,int>& a, pair<string,int>& b) {
    if(a.second==b.second){
        if(a.first.length()==b.first.length()){
            return a.first<b.first;
        }else{
            return a.first.length()>b.first.length();
        }
    }else{
        return a.second>b.second;
    }
}




int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    map<string,int> dictMap;
    vector<pair<string,int>> v;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        if(str.length() >= m){
            if(dictMap.find(str)==dictMap.end()){
                dictMap[str] = 1;
            }else{
                dictMap[str]++;
            }
        }
    }
    
    for(auto it :dictMap){
        v.emplace_back(it);
    }
    sort(v.begin(),v.end(),cmp);
    for(int i = 0; i<v.size(); i++){
        cout << v[i].first << '\n';
    }

}