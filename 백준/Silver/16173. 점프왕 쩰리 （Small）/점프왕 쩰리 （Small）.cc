#include <iostream>
#include <queue>
using namespace std;
int box[3][3]={0,};
bool visited[3][3] = {0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    bool flag = 0;
    queue<pair<int,int>> q;
    cin >> n;
    for(int i = 0;i<n; i++ ){
        for (int j = 0; j<n;j++){
            cin >> box[i][j];
        }
    }
    q.push(make_pair(0,0));
    while(!q.empty()){
        int curx, cury, jump;
        curx = q.front().first;
        cury = q.front().second;
        jump = box[curx][cury];
        if(jump==-1){
            flag = 1;
            break;
        }
        if(curx+jump<n){
            if(!visited[curx+jump][cury]){
                q.push(make_pair(curx+jump,cury));
                visited[curx+jump][cury] = 1;
            }
        }
        if(cury+jump<n){
            if(!visited[curx][cury+jump]){
                q.push(make_pair(curx,cury+jump));
                visited[curx][cury+jump] = 1;
            }
            
        }
        q.pop();
    }
    if(flag == 1){
        cout << "HaruHaru";
    }else{
        cout << "Hing";
    }
    
    
}

