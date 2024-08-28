#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
string name[100001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    map<string,int> index;
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        string item;
        cin >> item;
        index.insert({item,i});
        name[i] = item;
    }
    for(int i =0; i<m; i++){
        string q;
        cin >> q;
        if(isdigit(q[0])){
            cout << name[stoi(q)]<<'\n';

        }else{
            cout<<index.at(q)<<'\n';
        }
    }
}