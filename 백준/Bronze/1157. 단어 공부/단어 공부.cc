#include <iostream>
#include <string>
using namespace std; 
int main(){
    int index = 0, max=0;
    int alparr[26]={0,};
    string word;
    char ans;
    cin >> word;
    for(int i = 0; i < word.length(); i++){
        if(word[i]<'a')
            alparr[word[i]-'A']++;
        else
            alparr[word[i]-'a']++;
    }
    for(int i = 0; i<26; i++){
        if(alparr[i] == max) {
            ans='?';
        }
        if (alparr[i] > max){ 
            max = alparr[i];
            ans = 'A' + i;
        }
        
        
    }
    cout<< ans;
    
}