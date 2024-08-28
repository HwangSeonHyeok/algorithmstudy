#include <iostream>
#include <string>
using namespace std; 
int main(){
    int n[26];
    string word;
    fill(n, n+26, -1);
    cin >> word;
    for(int i = 0; i < word.length(); i++){
        if(n[word[i]-'a'] == -1) n[word[i]-'a'] = i;
    }
    for(int i = 0; i < 26; i++){
        cout << n[i]<< ' ';
    }


}