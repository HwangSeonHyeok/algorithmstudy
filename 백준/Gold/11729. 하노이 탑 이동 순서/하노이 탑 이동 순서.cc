#include<math.h>
#include<iostream>
using namespace std;

void hanoi(int k, int from, int to, int dir){
    if(k == 1){
        printf("%d %d\n", from, to);
    }
    else{
        hanoi(k-1, from, dir, to);
        printf("%d %d\n", from, to);
        hanoi(k-1, dir, to, from);
    }

}



int main(){
    
    int k,ans;
    cin >> k;
    ans = (pow(2,k)-1);
    printf("%d\n",ans);

    hanoi(k, 1, 3, 2);
    

}