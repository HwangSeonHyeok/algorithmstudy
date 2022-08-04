//서로 다른 부분 문자열의 개수
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    set<string> strset;
    string str;
    cin >> str;
    int strlen = str.length();
    for(int i = 0; i < strlen; i++){
        for(int j = 0; j<strlen-i; j++){
            string partstr = str.substr(i,j+1);
            strset.insert(partstr);
        }
    }
    cout << strset.size();

}