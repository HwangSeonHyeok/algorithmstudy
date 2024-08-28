#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
char stack[51] = {0,};
int index = -1;

int main(){
    int t, num, ans=0;
    string str;
    cin >> t;
    for(int i = 0; i<t; i++){
        index=-1;
        cin >> str;
        for(int j = 0; j<str.length();j++){
            if(str[j]=='('){
                stack[++index]=str[j];
            }   
            else if(str[j]==')'){
                if(index<0){ 
                    index = 0;
                    break;
                }
                stack[index--]=0;
            }
        }
        if(index==-1){
            cout << "YES"<<'\n';
        }
        else{
            cout << "NO"<<'\n';
        }
    }
}