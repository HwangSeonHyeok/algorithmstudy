#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string numstr, ans;
    cin >> numstr;
    if(numstr == "0"){
        cout << 0;
        return 0;
    }
    for(int i = 0; i < numstr.length(); i++){
        int temp = numstr[i]-'0';
        ans += to_string(temp/4);
        ans += to_string((temp%4)/2);
        ans += to_string((temp%4)%2);
    }
    bool start = false;
    for(int i = 0; i<ans.length();i++){
        if(start){
            cout << ans[i];
        }
        else{
            if(ans[i] == '1'){
                start = true;
                cout<< ans[i];
            }
        }   
    }
    return 0;
}