#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int dp1[501]={0,}, dp2[501] = {0,};
    int n, start, des, ans = 0;
    cin >> n;
    int line[501] = {0,};
    for(int i = 1; i<=n; i++){
        scanf("%d %d", &start,&des);
        line[start] = des;
    }
    for(int i = 1; i<=500; i++){
        if(line[i]!=0){
            dp1[i] = 1;
            for(int j = 1; j<=i; j++){
                if(line[j]!=0){
                    if(line[i]>line[j])
                        dp1[i] = max(dp1[i],dp1[j]+1);
                }

            }
        }
    }
    for(int i = 1; i<= 500; i++){
        if(ans< dp1[i]){
            ans = dp1[i];
        }
    }
    cout << n-ans;
}
