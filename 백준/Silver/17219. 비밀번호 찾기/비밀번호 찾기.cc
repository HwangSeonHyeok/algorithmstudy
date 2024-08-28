#include <iostream> 
#include<unordered_map>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    unordered_map<string,string> map;
    cin >> n >> m;
    for(int i = 0; i<n;i++){
        string site, pwd;
        cin >> site>> pwd;
        map.insert(make_pair(site,pwd));
    }
    for(int i = 0; i<m; i++){
        string site;
        cin >> site;
        cout << map[site] << '\n';
    }
    
    
}