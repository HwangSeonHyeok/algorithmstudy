#include <iostream>
using namespace std;
int n, m, ct = 0;
int visit[16][16] = {0,};
void dfs(int line){
    if(line == n+1)
    {
        //���� n������ ������ ī��Ʈ
        ct++;
        return;
    }
    for(int i = 1; i < n+1; i++){
            if(visit[line][i]==0)
            {
                //���ݴ��ϴ°ű��� ���δ� ä��������
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
//jake1121�� �ڵ��ε� check�κ��� �ű��ؼ� �����ͺô�
/*#include <iostream>
#define MAX 15
using namespace std;

int col[MAX];
int N, total = 0;

bool check(int level)
{
    for(int i = 0; i < level; i++)
        if(col[i] == col[level] || abs(col[level] - col[i]) == level - i)// �밢���̰ų� ���� ����
            return false;
        //col[i]�� �ǹ��ϴ� ���� X��ǥ, i�� �ǹ��ϴ°��� Y��ǥ�̹Ƿ� ���̰� �����ϴٸ� �밢���� �ִٰ� �� �� �ִ�.
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
            col[x] = i; // �ش� ��ġ�� ���� ��ġ
            if(check(x)) // ��ȿ�ϴٸ� �������� �� ��ġ, ��ȿ�����ʴٸ� �ٸ� ��ġ�� �� ��ġ ����
                nqueen(x+1);
        }
    }
}
int main() {
    cin >> N;
    nqueen(0);
    cout << total;
}*/