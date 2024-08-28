#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, M, num, B, time, mintime = 2100000000,blocks=0, ansh;
    int land[257]={0,};
    cin >>N>>M>>B;
    int nulbi=N*M;
    for(int i = 0; i<nulbi;i++){
        cin >> num;
        land[num]++;
        blocks+=num;
    }
    for(int h = 256; h>=0;h--){
        time = 0;
        if(blocks+B>=h*nulbi){
            for(int i = 0;i<257;i++){
                if(land[i]!=0){
                    if(i>h){
                        time += ((i-h)*2)*land[i];
                    }
                    else if(i<h){
                        time += ((h-i)*land[i]);
                    }
                }
            }
            if(time<mintime){
                ansh=h;
                mintime=time;
            }
        }
    }
    cout << mintime << " " << ansh;


}