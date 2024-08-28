#include<iostream>
using namespace std;



int main(){
    int n, m, ans = 0;
    scanf("%d %d", &n ,&m);
    int card[n];
    for(int i = 0; i < n; i++){
        cin >> card[i];
    }
    for(int i = 0; i< n - 2; i++){
        int num1 = card[i], num2, num3, sum;
        for(int j = i+1; j < n - 1; j++){
            num2= card[j];
            if(m > num1+num2){
                for(int k = j+1; k < n; k++){
                    num3 = card[k];
                    sum = num1 + num2 + num3;
                    if(m>= sum && sum>ans)
                        ans = sum;

                }
            }
        }
        
    }
    cout << ans;
}