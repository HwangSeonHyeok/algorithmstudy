//µË∫∏¿‚
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
string bodo[500001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    set<string> db;
    int n,m, cnt = 0;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        db.insert(str);
    }
    for(int i = 0; i<m; i++){
        string str;
        cin >> str;
        if(db.find(str)!=db.end()){
            bodo[cnt] = str;
            cnt++;
        }
    }
    sort(bodo,bodo+cnt);
    cout << cnt << '\n';
    for(int i = 0; i<cnt; i++){
        cout << bodo[i] << '\n';
    }
}