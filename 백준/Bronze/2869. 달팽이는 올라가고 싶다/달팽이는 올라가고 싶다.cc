#include <iostream>
using namespace std; 
int main(){
    int a,b,v, day = 0, current = 0;
    cin >> a >> b >> v;
    if((v-a)%(a-b)==0) day = (v-a) / (a-b) + 1;
    else day = (v-a)/(a-b) +2;
    cout << day;
}