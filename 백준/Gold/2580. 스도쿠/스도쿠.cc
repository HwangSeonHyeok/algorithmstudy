#include <iostream>
using namespace std;
int squarenum = 1;
int sdoku[9][9] = {0,};
bool line[9][9] = {0,};
bool row[9][9] = {0,};
bool square[9][9] = {0,};
void dfs(int num){
    int l, r, squarenum;
    l= num/9;
    r= num%9;
    squarenum = (l/3)*3 +(r/3);
    if(num == 81)
    {
        for(int i = 0; i<9; i++){
            for(int j = 0; j<9; j++){
                printf("%d ", sdoku[i][j]);
            }
            printf("\n");
        }
        exit(0);
    }
    if(sdoku[l][r]==0){
         for(int i = 1; i < 10; i++){
            if(!line[l][i]&&!row[r][i]&&!square[squarenum][i]){
                sdoku[l][r] = i;
                line[l][i] = true;
                row[r][i] = true;
                square[squarenum][i] = true;
                dfs(num+1);
                sdoku[l][r] = 0;
                line[l][i] = false;
                row[r][i] = false;
                square[squarenum][i] = false;
            }
        }
        
        
            
    }
    else dfs(num+1);
    
}

int main(){
    int n;
    for(int i = 0; i<9; i++){
        for(int j = 0; j<9; j++){
            cin >> n;
            if(n != 0){
                sdoku[i][j] = n;
                line[i][n] = true;
                row[j][n] = true;
                square[(i/3)*3 + (j/3)][n] = true;
            }
        }
    }
    dfs(0);   
}