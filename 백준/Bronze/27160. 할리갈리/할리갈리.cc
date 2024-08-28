#include <iostream>
#include <string>
using namespace std;

int cards[4]={0,};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string fruit;
    int n, x;
    cin >>  n;
    for(int i=0; i<n; i++){
        cin >> fruit >> x;
        if(fruit == "STRAWBERRY")
            cards[0] += x;
        else if(fruit == "BANANA")
            cards[1] += x;
        else if(fruit == "LIME")
            cards[2] += x;
        else if(fruit == "PLUM")
            cards[3] += x;
    }
    for(int i = 0; i<4; i++){
        if(cards[i]== 5){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;

}