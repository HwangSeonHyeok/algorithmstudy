#include <iostream>
#include <string>
using namespace std; 
int main(){
    int a, count = 0;
    cin >> a;
    count = a;
    for(int i = 0; i < a; i++){
        string str;
        int alparr[26] = {0,};
        cin >> str;
        
        for(int j = 0; j < str.length(); j++){
            int n = (str[j]-'a');
            if(j==0) alparr[n]++;
            else{
                if(str[j] != str[j-1]){
                    if(alparr[n] == 0) alparr[n]++;
                    else{ 
                        count--;
                        break;
                    }
                }
            }
        }
    }
    cout << count;
}