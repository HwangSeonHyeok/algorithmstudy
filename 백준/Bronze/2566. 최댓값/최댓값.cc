#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int arr[10][10] = {0,}, row, column, maximum = -1;
    for(int i = 1; i<10; i++){
        for(int j = 1;j<10; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i<10; i++){
        for(int j = 1;j<10; j++){
            if(arr[i][j]>maximum){
                maximum = arr[i][j];
                row = j;
                column = i;
            }
        }
    }
    cout << maximum << '\n';
    cout << column << ' ' << row;
    
}