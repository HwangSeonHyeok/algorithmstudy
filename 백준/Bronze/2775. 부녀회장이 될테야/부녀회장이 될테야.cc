#include <iostream>
using namespace std; 
int cal(int a, int b){
    if(a==0){
        return b;
    }
    if(b==1){
        return 1;
    }
    return cal(a-1,b) + cal(a, b-1);
}
int main(){
    int t, k, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> k >> n;
        cout << cal(k,n) << endl;
    }
    
}