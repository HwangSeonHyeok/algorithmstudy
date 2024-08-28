#include <iostream>
#include <map>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map<string,string,greater<string>> m;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string name, ent;
        cin >> name >> ent;
        m[name]=ent;
    }
    
    for(auto iter = m.begin(); iter != m.end(); iter++){
        if(iter->second =="enter"){
            cout << iter->first << '\n';
        }
    }
    
}