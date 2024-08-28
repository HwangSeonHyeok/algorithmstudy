#include <iostream>
#include <string>
using namespace std; 
int main(){
    string str;
    int count = 1;
    getline(cin, str);
    if(str[0] == ' ') count = 0;

    for (int i = 1; i<str.length(); i++){
        if(str[i] != (' ') && str[i-1] ==' ') count++;
    }
    cout<< count;

    
}