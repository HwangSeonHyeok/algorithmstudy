#include<iostream>
using namespace std; 
int main(){
    int m, n, min = 0, sum = 0;
    cin >> m >> n;
    
    for(int i = m; i < n + 1; i ++){

        if (i != 1 && i%2 != 0){
            for(int j = 3; j < i+1; j++){
                if(j != i && i % j !=0) j++;
                
                else if(j == i) {
                    if( min == 0) min = j;
                    sum+=j;
                }
                
                else j += 10000;

            }
        }
        else if (i == 2){
            sum += 2;
            min = 2;
        }
        
    }
    if(min ==0) cout << -1;
    else cout << sum << endl << min;
}