#include<iostream>
using namespace std; 
int main(){
    int n, num, p=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num == 2) p++;
        if(num != 1 && num%2 != 0){
            for(int j = 3; j < num+1; j++){
                if(j != num && num%j !=0) j++;
                
                else if(j == num) p++;
                
                else j += 1000;

            }
        }
    }
    cout << p;
}