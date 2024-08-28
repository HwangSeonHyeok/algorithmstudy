#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;

int ans[8] = {0,};
bool visited[8] = {0,};
int n,m;
void dfs(int depth){
    
    if(depth == m){
        for(int i = 0; i<depth;i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return ;
    }
    for(int i = 0; i<n; i++){
        if(!visited[i]){
            ans[depth] = v[i];
            visited[i] = true;
            dfs(depth+1);
            visited[i] = false;
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    dfs(0);

}