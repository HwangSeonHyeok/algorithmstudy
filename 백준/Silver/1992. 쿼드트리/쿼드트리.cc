#include<iostream>
#include<string>
using namespace std;

int arr[64][64] = {0,};
//크기n시작위치 x,y를 받자
void paperCut(int n, int x, int y){
    int c = arr[x][y];
    for(int i = y;i<n+y;i++){
        for(int j = x; j<n+x;j++){
            if(arr[j][i]!=c){
                cout<<"(";
                paperCut(n/2,x,y);//1사분면
                paperCut(n/2,x + n/2,y);//2사분면
                paperCut(n/2,x,y+n/2);//3사분면
                paperCut(n/2,x+n/2,y+n/2);//4사분면
                cout<<")";
                return ;
            }
        }
        if(i==n+y-1){
            cout<<c;
        }

    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    string str;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> str;
        for(int j = 0; j<n; j++){
            arr[j][i] = str[j]-48;
        }
    }
    paperCut(n,0,0);

}