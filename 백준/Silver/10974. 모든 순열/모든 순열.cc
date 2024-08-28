#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> v;
bool isvisited[9] = {0,};
void solve(int d){
    if(d==n){
        for(int i = 0;i<n;i++){
            cout << v[i] << ' ';

        }
        cout << '\n';
        return;
    }
    for(int i = 1;i<=n;i++){
        if(!isvisited[i]){
            isvisited[i] = true;
            v.push_back(i);
            solve(d+1);
            v.pop_back();
            isvisited[i] = false;   
        }     
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    solve(0);



    
}