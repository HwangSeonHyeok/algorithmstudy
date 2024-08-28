#include <iostream>
#include <cmath>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool gear[5][8]={0,};
    int n,score = 0,idx[5] = {0,};
    string tmp;
    for(int i = 1; i<=4;i++){
        cin >> tmp;
        for(int j = 0; j<8;j++){
            gear[i][j] = (tmp[j] - '0');
        }
    }
    cin >> n;
    for(int i= 0; i<n; i++){
        int gearnum,dir;
        bool isMoved[5] = {0,};
        cin >> gearnum >> dir;
        isMoved[gearnum] = 1;
        for(int j = 1; j<=3; j++){
            int right = gearnum+j;
            if(right<=4&&isMoved[right-1]){
                if(gear[right-1][(idx[right-1]+2)%8] != gear[right][(idx[right]+6)%8]){
                    isMoved[right] = 1;
                }
            }
            int left = gearnum-j;
            if(left>=1&&isMoved[left+1]){
                if(gear[left+1][(idx[left+1]+6)%8] != gear[left][(idx[left]+2)%8]){
                    isMoved[left] = 1;
                }
            }
        }
        for(int i = 1; i<=4;i++){
            if(isMoved[i]){
                if(gearnum%2==i%2)
                    idx[i] -=dir;
                else
                    idx[i] +=dir;
                if(idx[i]==8){
                    idx[i]=0;
                }else if(idx[i]==-1){
                    idx[i] = 7;
                }
            }
        }
    }
    for(int i = 1; i<=4; i++){
        if(gear[i][idx[i]]){
            score +=pow(2,i-1);
        }
    }
    cout << score;

}

