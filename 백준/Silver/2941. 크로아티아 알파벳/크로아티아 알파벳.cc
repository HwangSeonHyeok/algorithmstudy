#include <iostream>
#include <string>
using namespace std; 
int main(){
    string str;
    cin >> str;
    int count = str.length();
    for(int i = 0; i< str.length(); i++){
        if(str[i] == '='){
            count--;
            if(i> 1)
                if(str[i-1] == 'z' && str[i-2] == 'd') count--;
        }
        if(str[i] == '-'){
            count--;
        }
        if(str[i] == 'j'){
            if(str[i-1] == 'l' || str[i-1] == 'n')count--;
        }
    }
    cout << count;
    

}