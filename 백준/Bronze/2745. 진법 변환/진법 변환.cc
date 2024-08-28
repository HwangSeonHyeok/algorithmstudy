#include <iostream>
#include <cmath>
using namespace std;

bool arr[101][101]={0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, cnt = 0, result = 0;
    string s;

    cin >> s >> n;
    
    for(int i = s.length()-1; i<=s.length(); i--){
        if(s[i]>='A'&&s[i]<='Z'){
            result += (s[i]-'A'+10)*pow(n,cnt);
        }
        else{
            result += (s[i]-'0')*pow(n,cnt);
        }
        cnt++;
    }
    cout << result;
}