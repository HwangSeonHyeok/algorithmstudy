#include<math.h>
#include<iostream>
using namespace std;

void hanoi(int k, int from, int to){
    if(k == 1){
        printf("%d %d\n", from, to);
    }
    else{
        int buf = 6-from-to;
        hanoi(k-1, from, buf);
        printf("%d %d\n", from, to);
        hanoi(k-1, buf, to);
    }

}



int main(){
    
    int k,ans;
    cin >> k;
    ans = (pow(2,k)-1);
    printf("%d\n",ans);

    hanoi(k, 1, 3);
    

}