#include <iostream>
#include <algorithm>
using namespace std;
typedef struct{
    int x;
    int x2;
    int num;
}Xnum;
bool cmp(Xnum a, Xnum b){
    return a.x<b.x;
}
bool cmp2(Xnum a, Xnum b){
    return a.num < b.num;
}

int main(){
	int n, count = 0;
    
    cin >> n;
    Xnum* numarr= new Xnum[n];
    for(int i = 0; i<n; i++){
        cin >> numarr[i].x;
        numarr[i].num = i;
    }
    sort(numarr, numarr + n ,cmp);
    numarr[0].x2 = 0;
    for(int i = 1; i < n; i++){
        if(numarr[i].x > numarr[i-1].x){
            count++;
        }
        numarr[i].x2 = count;
    }
    sort(numarr, numarr + n, cmp2);
    for(int i = 0; i < n; i++){
        printf("%d ", numarr[i].x2);
    }
    
}