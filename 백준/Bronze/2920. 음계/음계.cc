#include <iostream>
using namespace std;

int main(){
	int n[8];
    for(int i = 0; i<8; i++){
        cin >> n[i];
    }
    if(n[0] == 1){
        for(int i = 0; i<8; i++){
            if(n[i]!=i+1){
                cout << "mixed";
                return 0;
            }
        }
        cout << "ascending";
        return 0;
    }
    else if(n[0] == 8){
        for(int i = 0; i<8; i++){
            if(n[i]!=8-i){
                cout << "mixed";
                return 0;
            }
        }
        cout << "descending";
        return 0;
    }
    else {
        cout<< "mixed";
        return 0;
    }
    
    
    
    
}