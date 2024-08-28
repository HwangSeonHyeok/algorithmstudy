#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int score[5] = {0}, num, winner, highscore = 0;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<4; j++){
            cin >> num;
            score[i]+= num;
        }
    }
    for(int i = 0; i<5; i++){
        if(score[i]> highscore){
            winner = i +1;
            highscore = score[i];
        }
    }
    cout << winner << ' ' << highscore;
}