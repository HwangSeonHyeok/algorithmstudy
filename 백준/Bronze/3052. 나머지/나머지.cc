#include <iostream>
#include <algorithm>
using namespace std; 
int main(){
    int a=42;
    int count = 0;
    int arr[10];
    for(int i = 0; i<10; i++){
        cin >> a;
        arr[i] = a%42;
    }
    sort(arr, arr+10);
    for(int i = 0; i < 10; i++){
        if(a != arr[i]){
            count++;
            a = arr[i];
            }

    }
    cout << count;
}