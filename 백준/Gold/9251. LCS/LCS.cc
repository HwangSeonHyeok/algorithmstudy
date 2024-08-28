#include<algorithm>
#include <iostream>
#include <algorithm>
using namespace std;
int lcs[1001][1001]={0};
int main(){
    int ans=0;
    string str1, str2;
    cin >> str1;
    cin >> str2;
    for(int i = 1; i <= str1.length(); i++){
        for(int j = 1; j<=str2.length(); j++){
            if(str1[i-1]==str2[j-1]){
                lcs[i][j] = lcs[i-1][j-1] + 1;
            }
            else{
                lcs[i][j] = max(lcs[i][j-1],lcs[i-1][j]);
            }
        }
    }
    ans = lcs[str1.length()][str2.length()];
    cout << ans;
}