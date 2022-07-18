#include <iostream>
using namespace std;
int n, m, ct = 0;
int visit[16][16] = {0,};
void dfs(int line){
    if(line == n+1)
    {
        //퀸을 n개까지 놨으면 카운트
        ct++;
        return;
    }
    for(int i = 1; i < n+1; i++){
            if(visit[line][i]==0)
            {
                //공격당하는거까지 전부다 채워버리기
                for(int j = 1; j< n+1; j++){
                    if(visit[line][j] == 0){
                        visit[line][j]=line;
                    }
                    if(line+j < n+1){
                        if(visit[line+j][i] == 0){
                            visit[line+j][i] = line;
                        }
                    }
                    if(i-j > 0 && line+j < n+1){
                        if(visit[line+j][i - j] == 0){
                            visit[line+j][i - j] = line;
                        }
                    }
                    if(i+j < n+1 && line+j < n+1){
                        if(visit[line+j][i+j] == 0){
                            visit[line+j][i+j] = line;
                        }
                    }

                }
                
                dfs(line+1);
                for(int j = line; j<n+1; j++){
                    for(int k = 1; k<n+1; k++){
                        if(visit[j][k]==line)
                            visit[j][k]=0;
                    }
                }
                

            }
        
    }
}

int main(){
    cin >> n;
    dfs(1);
    cout << ct ;
}
//jake1121님 코드인데 check부분이 신기해서 가져와봤다
/*#include <iostream>
#define MAX 15
using namespace std;

int col[MAX];
int N, total = 0;

bool check(int level)
{
    for(int i = 0; i < level; i++)
        if(col[i] == col[level] || abs(col[level] - col[i]) == level - i)// 대각선이거나 같은 라인
            return false;
        //col[i]가 의미하는 것이 X좌표, i가 의미하는것이 Y좌표이므로 차이가 일정하다면 대각선에 있다고 볼 수 있다.
    return true;
}

void nqueen(int x)
{
    if(x == N)
        total++;
    else
    {
        for(int i = 0; i < N; i++)
        {
            col[x] = i; // 해당 위치에 퀸을 배치
            if(check(x)) // 유효하다면 다음행의 퀸 배치, 유효하지않다면 다른 위치로 퀸 배치 변경
                nqueen(x+1);
        }
    }
}
int main() {
    cin >> N;
    nqueen(0);
    cout << total;
}*/