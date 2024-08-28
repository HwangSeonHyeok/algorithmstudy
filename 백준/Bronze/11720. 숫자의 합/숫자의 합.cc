#include <iostream>
using namespace std; 
int main(){
    int n, num=0, sum = 0;
    cin >> n;
    
    for(int i = 0; i<n; i++){
        scanf("%1d", &num);
        sum += num;
    }
    cout << sum;

}