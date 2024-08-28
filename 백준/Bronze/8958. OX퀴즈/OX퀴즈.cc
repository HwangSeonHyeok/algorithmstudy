#include <iostream>
#include <string>
#include <cstring>
#define SIZE 80
using namespace std; 
int main(){
    int n,  score;
    cin >> n;
    int sc[n];
    string a;
    for(int i = 0; i < n; i++){
        cin>>a;
        for(int j = 0, count = 0; j < a.length(); j++){
            if(a[j]== 'O') count++;
            else count=0;
            score += count; 
            
        }
        sc[i] = score;
        score = 0;
        
        
    }
    for(int i=0; i < n; i++){
        cout << sc[i] <<endl;
    }
    


}