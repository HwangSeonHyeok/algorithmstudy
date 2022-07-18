#include <iostream>
using namespace std; 
int main(){
    long long t, x, y;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> x >> y;
        long long dis = y - x, move = 0, count = 0, pos = 0;//, high = 0;
        while(1){
            if(pos == dis){
                break;
            }
            //고점찾기
           // if(high == 0){
                if(dis>(pos*2) + move){
                    move++;
                }
                /*else if(dis < (pos*2) + move)
                {
                    high = move;

                }*/
                 if((dis - pos < (move*(move+1))/2) && move != 1){
                    move--;
                }
           /* }
            //고점 찾고 내려오기
            if(high!=0){
                if((dis - pos < (move*(move+1))/2) && move != 1){
                    move--;
                }
            }*/
            pos += move;
            count++;

        }
        cout << count << endl;

    
    }

}