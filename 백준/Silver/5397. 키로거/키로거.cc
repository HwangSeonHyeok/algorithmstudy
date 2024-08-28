#include <iostream>
#include <stack>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        string s,ans="";
        cin >> s;
        stack<char> left, right;
        for(int j = 0; j<s.size();j++){
            if(s[j]=='<'){
                if(!left.empty()){
                    right.push(left.top());
                    left.pop();
                }
            }else if(s[j]=='>'){
                if(!right.empty()){
                    left.push(right.top());
                    right.pop();
                }
            }else if(s[j]=='-'){
                if(!left.empty()){
                    left.pop();
                }
            }
            else{
                left.push(s[j]);
            }
        }
        while(!left.empty()){
            right.push(left.top());
            left.pop();
        }
        while(!right.empty()){
            ans += right.top();
            right.pop();
        }
        cout << ans << '\n';

    }


}