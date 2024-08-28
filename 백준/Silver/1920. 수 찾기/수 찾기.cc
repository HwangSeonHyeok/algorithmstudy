#include <iostream>
#include <algorithm>
using namespace std;
int numarr[100001];
void bns(int n, int target){
    int left = 0;
    int right = n-1;
    int mid;
    while(left <= right){
        mid = (left + right)/2;
        if(numarr[mid] == target){
            printf("1\n");
            return ;
        }
        else if (numarr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    printf("0\n"); 
    return;
    

}


int main(){
    int n, m, num;
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        numarr[i] = num;
    }
    sort(numarr, numarr+n);
    cin >> m;
    
    for(int i = 0; i < m; i++){
        scanf("%d", &num);
        bns(n, num);
    }

    
}