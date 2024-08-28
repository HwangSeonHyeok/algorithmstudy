#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first<b.first;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        vector<pair<int,int>> v;
        int n, cnt = 1, min;
        cin >> n;
        for(int j = 0; j<n; j++){
            int a,b;
            cin >> a >> b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end(),cmp);
        min = v[0].second;
        for(int i = 1; i<n; i++){
            if(v[i].second<min){
                cnt++;
                min = v[i].second;
            }
        }
        cout << cnt<<'\n';
        
    }
    
    
    
}