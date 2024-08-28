#include <iostream>
#include <string>
using namespace std; 
int main(){
    string str;
    int time = 0;
    cin >> str;
    for(int i = 0; i<str.length(); i++){
        if(str[i] - 'A'<3) time+=3;
        else if(str[i] - 'A'< 6) time+=4;
        else if(str[i] - 'A'< 9) time+=5;
        else if(str[i] - 'A'< 12) time+=6;
        else if(str[i] - 'A'< 15) time+=7;
        else if(str[i] - 'A'< 19) time+=8;
        else if(str[i] - 'A'< 22) time+=9;
        else time+=10;
    }
    cout << time;

}