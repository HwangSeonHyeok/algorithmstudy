#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str, ans;
    cin >> str;
    ans = "{";
    for(int i = 0; i<str.length()-2;i++){
        for(int j = i+1; j<str.length()-1;j++){
            string part1, part2, part3, all;
            part1 = str.substr(0,i+1);
            reverse(part1.begin(),part1.end());
            part2 = str.substr(i+1,j-i);
            reverse(part2.begin(),part2.end());
            part3 = str.substr(j+1,str.length()-(j+1));
            reverse(part3.begin(),part3.end());
            all = part1 + part2 + part3;
            if(ans>all){
                ans = all;
            }
        }

    }
    cout << ans;

}

