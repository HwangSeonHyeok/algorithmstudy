#include <iostream>
using namespace std;
//어떤 자료구조에 저장할지 고민해보자
int dp[101][101][101]={0,};

int w(int a, int b, int c){
    int a2 = a+50;
    int b2 = b+50;
    int c2 = c+50;
    if(a<=0 || b<=0 || c<=0){
        return 1;
    }
    else if(a>20 || b> 20 || c> 20){
        return w(20,20,20);
    }
    else if(dp[a+50][b+50][c+50]==0){
        if(a<b && b < c){
            dp[a2][b2][c2] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
            return dp[a2][b2][c2];
        }
        else{
            dp[a2][b2][c2] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
            return dp[a2][b2][c2];
        }

    }
    else 
        return dp[a2][b2][c2];
}


int main(){
    int a,b,c;
    while(1){
        cin >> a >> b >> c;
        if(a==-1 && b==-1 && c==-1)
            return 0;
        else
            printf("w(%d, %d, %d) = %d\n", a, b, c, w(a,b,c));
    }

    
}