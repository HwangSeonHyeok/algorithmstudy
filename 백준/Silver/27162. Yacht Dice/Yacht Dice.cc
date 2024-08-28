#include <iostream>
#include <string>
using namespace std;

bool ables[13] = {0,};
int dice[7] = {0,};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char able;
    bool overlap = 0;
    int n, result = 0, oln = 0;
    for(int i = 1; i <= 12; i++){
        cin >> able;
        if(able == 'Y'){
            ables[i] = true;
        }
    }
    for(int i = 0; i < 3; i++){
        cin >> n;
        dice[n]++;
    }
    for(int i = 1; i< 7; i++){
        if(dice[i]>1) {
            overlap = 1;
            oln = i;
        }
    }
    
    for(int i = 1; i <= 12; i++){
        int temp = 0;
        if(ables[i] == true){
            if(i<7){
                temp = (dice[i]+2)*i;
            }
            else if(i == 7 && overlap){
                temp = oln*4;
            }
            else if(i == 8 && overlap){
                int noln = 0;
                for(int j = 1; j<7; j++){
                    if(dice[j] == 1)
                        noln = j;
                }
                if(noln == 0 && oln!=6) noln = 6;
                else if(noln == 0 && oln == 6) noln = 5;
                if(oln>noln){
                    temp = oln*3 + noln*2;
                }else{
                    temp = oln*2 + noln*3;
                }
            }
            else if (i == 9 && !overlap && dice[6] == 0){
                temp = 30;
            }
            else if (i == 10 && !overlap && dice[1] == 0){
                temp = 30;
            }
            else if (i == 11 && dice[oln] ==3){
                temp = 50;
            }
            else if (i == 12){
                for(int j = 1; j<=6; j++){
                    temp += dice[j]*j;
                }
                temp += 12;
            }
            if(result < temp) result = temp;
        }
    }
    cout << result;


}