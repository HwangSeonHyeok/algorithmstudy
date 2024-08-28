#include <iostream>
using namespace std; 
int main(){
    int n, compare = 1, count=0;
    cin >> n;
    while(compare<n){
        count++;
        compare += 6*count;
    }
    count++;
    cout << count;
}