#include <iostream>
using namespace std;
int n, m;
int arr[9] = {0,};
bool visit[9] = {0,};
void dfs(int cnt){
    if(cnt == m)
    {
        for(int i = 0; i < m; i++)
        printf("%d ", arr[i]);
        cout << "\n";
        return;
    }
    for(int i = 1; i < n+1; i++){
        arr[cnt] = i;
        dfs(cnt+1);
    }
}

int main(){
    cin >> n >> m;
    dfs(0);
    

}