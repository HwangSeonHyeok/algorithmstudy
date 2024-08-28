#include <iostream>
using namespace std;
int n, Max= -1000000001, Min = 1000000001;
int num[11];
int oper[4];//0 = +, 1 = -, 2 = *, 3 = /
void dfs(int cnt, int result){
    int cal;
    if(cnt == n-1)
    {
        if(result>Max) Max = result;
        if(result<Min) Min = result;
    }
    for(int i = 0; i < 4; i++){
        if(oper[i]!=0){
            if(i == 0){
                cal = result + num[cnt+1];
            }
            else if(i == 1){
                cal = result - num[cnt+1];
            }
            else if(i == 2){
                cal = result * num[cnt+1];
            }
            else if(i == 3){
                cal = result / num[cnt+1];
            }
            oper[i]--;
            dfs(cnt+1,cal);
            oper[i]++;

        }
    }
    
    
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    for(int i = 0; i < 4; i++)
        cin >> oper[i];
    dfs(0,num[0]);
    cout << Max <<endl;
    cout << Min << endl;   
}