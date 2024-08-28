#include <iostream>
#include <string>
using namespace std; 
int main(){
    int n, count;
    string word;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> count >> word;
        for (int j = 0; j<word.length(); j++){
            for(int k =0; k < count; k++){
                cout << word[j];
            }

        }
        cout<<endl;
    }
    

}