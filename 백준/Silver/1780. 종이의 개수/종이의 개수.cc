#include<iostream>
#include<string>
using namespace std;

int arr[2200][2200] = {0,};
int m=0,z=0,p=0;
//크기n시작위치 x,y를 받자
void paperCut(int n, int x, int y){
    int c = arr[x][y];
    for(int i = y;i<n+y;i++){
        for(int j = x; j<n+x;j++){
            if(arr[j][i]!=c){
                paperCut(n/3,x,y);//1
                paperCut(n/3,x + n/3,y);//2
                paperCut(n/3,x + (n/3)*2,y);//3
                paperCut(n/3,x,y+n/3);//4
                paperCut(n/3,x + n/3,y+n/3);//5
                paperCut(n/3,x + (n/3)*2,y+n/3);//6
                paperCut(n/3,x,y+(n/3)*2);//7
                paperCut(n/3,x + n/3,y+(n/3)*2);//8
                paperCut(n/3,x + (n/3)*2,y+(n/3)*2);//9
                return ;
            }
        }
        if(i==n+y-1){
            if(c==-1){
                m++;
            }
            else if(c==0){
                z++;
            }
            else{
                p++;
            }
        }

    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,num;
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> num;
            arr[j][i] = num;
        }
    }
    paperCut(n,0,0);
    cout<<m<<'\n';
    cout<<z<<'\n';
    cout<<p;

}