#include <iostream>
using namespace std; 
int main(){
    int x, y, input, compare = 0,count = 0;
    cin >> input;
    while(input>compare){
        count++;
        compare += count;
    }
    x= compare-input + 1;
    y = count - compare + input;
    if(count%2){
        cout << x << '/' << y;
    }
    else{
        cout << y << '/' << x;
    }
}