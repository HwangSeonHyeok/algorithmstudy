#include<iostream>
using namespace std;

int arr[128][128] = {0,};
int b = 0, w = 0;
//크기n시작위치 x,y를 받자
void paperCut(int n, int x, int y){
    int c = arr[x][y];
    for(int i = y;i<n+y;i++){
        for(int j = x; j<n+x;j++){
            if(arr[j][i]!=c){
                paperCut(n/2,x,y);//1사분면
                paperCut(n/2,x + n/2,y);//2사분면
                paperCut(n/2,x,y+n/2);//3사분면
                paperCut(n/2,x+n/2,y+n/2);//4사분면
                return ;
            }
        }
        if(i==n+y-1){
            if(c){
                b++;
            }
            else{
                w++;
            }
        }

    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, num;
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[j][i];
        }
    }
    paperCut(n,0,0);
    cout<<w<<'\n';
    cout<<b<<'\n';


}