#include <iostream>
using namespace std; 
int main(){
    int index, max= 0;
    int a[9];
    for(int i = 0; i<9; i++){
        cin >> a[i];
    }
    for (int i = 0; i<9; i++){
        if(max < a[i]){
            max= a[i];
            index = i+1;
        }

    }
    cout << max << endl;
    cout << index;
    
}