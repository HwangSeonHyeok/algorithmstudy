#include <iostream>
//#include <algorithm>
using namespace std;
int arr[200001][26]={0,}, q;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str;
    cin >> str;
    for(int i = 1; i<=str.length();i++){
        char c = str[i-1];
        for(int j = 0; j<26; j++){
            arr[i][j] = arr[i-1][j];
        }
        arr[i][c-'a']++;

    }
    cin >> q;
    for(int i = 0; i<q; i++){
        char c;
        int l, r, result;
        cin >> c >> l >> r;
        result = arr[r+1][c-'a']-arr[l][c-'a'];
        cout << result << '\n';
    }
}