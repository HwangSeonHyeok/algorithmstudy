#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str, bomb;
    stack<char> s1;
    cin >> str >> bomb;
    for(int i = str.size()-1; i>=0;i--){
        s1.push(str[i]);
        if(s1.top()==bomb[0]&&s1.size()>=bomb.size()){
            string temp = "";
            for(int j = 0; j<bomb.size();j++){
                if(bomb[j]==s1.top()){
                    temp += s1.top();
                    s1.pop();
                }else{
                    for(int k = temp.size()-1 ; k>=0; k--){
                        s1.push(temp[k]);
                    }
                    break;
                }
            }
        }
        
    }
    if(s1.empty()){
        cout << "FRULA";
    }else{
        while(!s1.empty()){
            cout << s1.top();
            s1.pop();
        }
    }
}