#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, count = 0;
    int num = 666;
    string numstr;
    cin >> n;
    while(1){
        numstr = to_string(num);
        for(int i = 0; i < numstr.length()-2; i++){
            if(numstr[i] == '6' && numstr[i+1] == '6' && numstr[i+2] == '6'){
                count++;
                if(count == n){
                    cout << num;
                    return 0;
                }
                break;
            }
        }
        num++;
    }
    
}