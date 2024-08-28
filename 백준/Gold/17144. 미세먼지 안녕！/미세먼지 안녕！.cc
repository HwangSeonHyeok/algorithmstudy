#include <iostream>
#include <algorithm>
using namespace std;
int field[51][51] = {0,};
int r,c,t, top=0,bottom=0;
int x[4] = {1,-1,0,0};
int y[4] = {0,0,1,-1};
int clockx[4] = {1,0,-1,0};
int clocky[4] = {0,-1,0,1};
int cclocky[4] = {0,1,0,-1};
void clean(){
    int temp[51][51] = {0,};
    for(int i = 0; i<r;i++){
        for(int j = 0; j<c;j++){
            temp[i][j] = field[i][j];
        }
    }
    int dir = 0;
    int curx = 0, cury = top;
    while(1){
        int nextx, nexty;
        nextx = curx + clockx[dir];
        nexty = cury + clocky[dir];
        if(nextx>=0&&nexty>=0&&nextx<c&&nexty<r){
            temp[nexty][nextx] = field[cury][curx];
            curx = nextx;
            cury = nexty;
        }else{
            dir++;
        }

        if(curx==0&&cury==top){
            break;
        }
    }
    dir = 0;
    curx = 0, cury = bottom;
    while(1){
        int nextx, nexty;
        nextx = curx + clockx[dir];
        nexty = cury + cclocky[dir];
        if(nextx>=0&&nexty>=0&&nextx<c&&nexty<r){
            temp[nexty][nextx] = field[cury][curx];
            curx = nextx;
            cury = nexty;
        }else{
            dir++;
        }

        if(curx==0&&cury==bottom){
            break;
        }
    }
    temp[top][1] = 0;
    temp[bottom][1] = 0;
    temp[top][0] = -1;
    temp[bottom][0] = -1;
    for(int i = 0; i<r;i++){
        for(int j = 0; j<c;j++){
            field[i][j] = temp[i][j];
        }
    }


}
void diffuse(){
    int temp[51][51] = {0,};
    for(int i = 0; i<r;i++){
        for(int j = 0; j<c;j++){
            if(field[i][j]>=5){
                int cnt = 0;
                for(int k = 0; k<4;k++){
                    if(j+x[k]<c&&j+x[k]>=0&&i+y[k]<r&&i+y[k]>=0&&field[i+y[k]][j+x[k]]!=-1){
                        cnt++;
                        temp[i+y[k]][j+x[k]]+=(field[i][j]/5);
                    }
                }
                field[i][j] -= (field[i][j]/5)*cnt;
            }
            
        }
    }
    for(int i = 0; i<r;i++){
        for(int j = 0; j<c;j++){
            field[i][j] += temp[i][j];
        }
    }
    return;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> r >> c >> t;
    for(int i = 0; i<r;i++){
        for(int j = 0; j<c;j++){
            cin >> field[i][j];
            if(top==bottom && field[i][j]==-1){
                top=i;
                bottom = i+1;
            }
        }
    }
    for(int i = 0; i<t;i++){
        diffuse();
        clean();
    }
    int result = 2;
    for(int i = 0; i<r;i++){
        for(int j = 0; j<c;j++){
            result += field[i][j];
        }
    }
    cout << result;
}

