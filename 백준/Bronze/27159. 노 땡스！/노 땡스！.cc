#include <iostream>
using namespace std;

bool cards[36]={0,};

int main(){
    int N, x, score = 0;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> x;
        cards[x]=true;
    }
    for(int i = 1; i<36; i++){
        if(cards[i]==true && cards[i-1]==false)
            score += i;
    }
    cout << score;

}