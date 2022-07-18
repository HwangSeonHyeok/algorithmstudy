#include <iostream>
using namespace std; 
//재귀로 풀라는 문제 같긴한데 다른 방법은 없었을까?
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