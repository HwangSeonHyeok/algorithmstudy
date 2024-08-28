//문자열 집합
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, cnt = 0;
    map<string,int> S;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        string word;
        cin >> word;
        S.insert({word,i});
    }
    for(int i = 0; i<m; i++){
        string question;
        cin >> question;
        if(S.find(question)!=S.end()){
            cnt++;
        }
    }
    cout << cnt;   
}