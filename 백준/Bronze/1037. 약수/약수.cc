#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n, ans;
    scanf("%d", &n);
    int numarr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &numarr[i]);
    }
    sort(numarr, numarr+n);
    ans = numarr[0]* numarr[n-1];
    printf("%d\n", ans);
}