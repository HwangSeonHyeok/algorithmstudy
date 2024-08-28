#include <iostream>
using namespace std; 
int main()
{
    int score, s=0, t = 0;
    for(int i = 0; i < 4; i++){
        cin >> score;
        s+=score;
    }
    for(int i = 0; i < 4; i++){
        cin >> score;
        t+=score;
    }
    if(t>s)
    cout<<t;
    else
    cout<<s;
}