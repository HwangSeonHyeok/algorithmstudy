#include <iostream> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str;
    int ans = 0;
    int stick = 0;
    cin >> str;
    for(int i = 0 ;i<str.length();i++){
        if(str[i]=='('){
            if(str[i+1]==')'){
                ans+=stick;
                i++;
            }else{
                ans++;
                stick++;
            }
        }
        else{
            stick--;
        }
    }
    cout << ans;
    
}