#include <iostream>
#include <algorithm>
using namespace std;
int lcs[1001][1001]={0};
string str1, str2;
void lcssub( int i, int j){
    if(i==0 || j==0) return;
    if(str1[i-1] == str2[j-1]){
        lcssub(i-1,j-1);
        cout << str1[i-1];
    }else{
        if(lcs[i-1][j]>lcs[i][j-1])
            lcssub(i-1,j);
        else
            lcssub(i, j-1);
    }
}

int main(){
    int ans=0;
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
    cout << ans << '\n';
    lcssub(str1.length(), str2.length());
}