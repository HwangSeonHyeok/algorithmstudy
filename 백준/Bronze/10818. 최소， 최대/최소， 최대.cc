#include <iostream>
#include <algorithm>
using namespace std; 
int main(){
    int n, arrsize;
    cin >> arrsize;
    int a[arrsize];
    for(int i = 0; i<arrsize; i++){
        cin >> a[i];
    }
    sort(a, a + arrsize);
    cout<< a[0] <<" "<< a[arrsize-1];

    
}