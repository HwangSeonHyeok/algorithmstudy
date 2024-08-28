#include <iostream> 
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s, ans = "";
    int num[2] ={0,};
    int current[2] ={0,};
    cin >> s;
    for(int i = 0; i<s.size();i++){
        if(s[i]=='0'){
            num[0]++;
        }else 
            num[1]++;
    }
    for(int i = 0; i<s.size();i++){
        if(s[i]=='0'&&current[0]<num[0]/2){
            ans+='0';
            current[0]++;
        }else if(s[i]=='1'&&current[1]>=num[1]/2){
            ans+='1';
        }else if(s[i]=='1'&&current[1]<num[1]/2){
            current[1]++;
        }
    }
    cout << ans;
}