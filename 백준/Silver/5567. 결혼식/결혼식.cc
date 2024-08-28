#include <iostream> 
#include <unordered_map>
#include <vector>
using namespace std;
bool isFriend[501][501] = {0,};
bool isInvited[501] = {0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n;
    cin >> m;
    for(int i = 0 ; i< m; i++){
        int a, b;
        cin >> a >> b;
        isFriend[a][b] = true;
        isFriend[b][a] = true;
    }
    int cnt = 0;
    vector<int> friends;
    isInvited[1] = true;
    for(int i = 1; i<=n;i++){
        if(isFriend[1][i]){
            isInvited[i] = true;
            cnt++;
            friends.push_back(i);
        }
    }
    for(auto f: friends){
        for(int i = 1; i<=n;i++){
            if(isFriend[f][i]&&!isInvited[i]){
                isInvited[i] = true;
                cnt++;
            }
        }
    }
    cout << cnt;
    
    
}