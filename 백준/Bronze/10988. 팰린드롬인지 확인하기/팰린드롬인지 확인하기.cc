#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str;
    bool ispanlindrome = 1;
    cin >> str;
    for(int i = 0; i<(str.length()+1)/2;i++){
        if(str[i]!=str[str.length()-1-i]){
            ispanlindrome = false; 
            break;
        }
    }
    cout << ispanlindrome <<'\n';

    
}