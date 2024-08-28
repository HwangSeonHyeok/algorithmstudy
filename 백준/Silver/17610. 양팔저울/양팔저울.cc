#include <iostream>
#include <map>
#include <vector>
using namespace std;
vector<int>  weight;
map<int,int> m; 
int k,cnt = 0;
void solve(int s, int left, int right){
    for(int i = s; i<k; i++){
        int nextleft = left + weight[i];
        int measure = nextleft-right;
        if(measure>0 && m.find(measure)==m.end()){
            m[measure] = 1;
            cnt++;
        }
        solve(i+1, nextleft,right);
    }
    for(int i = s; i<k; i++){
        int nextright = right + weight[i];
        int measure = left - nextright;
        if(measure>0 && m.find(measure)==m.end()){
            m[measure] = 1;
            cnt++;
        }
        solve(i+1, left,nextright);
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int total = 0;
    cin >> k;
    for(int i = 0; i<k; i++){
        int w;
        cin >> w;
        total += w;
        weight.push_back(w);
    }
    solve(0,0,0);
    cout << total-cnt;


}