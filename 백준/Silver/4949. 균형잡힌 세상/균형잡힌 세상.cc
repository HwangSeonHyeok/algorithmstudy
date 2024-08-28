#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
char stack[1012] = {0,};
int rindex = 0;
int index = 0;
int index2 = 0;

int main(){
    int t, num, ans=0;
    string str;
    while(1){
        index=0;
        index2=0;
        rindex=0;
        getline(cin,str);
        if(str==".")
            return 0;

        for(int j = 0; j<str.length();j++){
            if(str[j]=='('){
                index++;
                stack[++rindex]='(';
            }   
            else if(str[j]==')'){
                if(index<1||stack[rindex]!='('){ 
                    index = 1;
                    break;
                }
                index--;
                rindex--;
            }
            else if(str[j]=='['){
                index2++;
                stack[++rindex]='[';
            }
            else if(str[j]==']'){
                if(index2<1||stack[rindex]!='['){
                    index2 = 1;
                    break;
                }
                index2--;
                rindex--;
            }
        }
        if(index==0&&index2==0){
            cout << "yes"<<'\n';
        }
        else{
            cout << "no"<<'\n';
        }
    }
}