#include <iostream>
using namespace std; 
int main()
{
    int startnum, a, b;
    scanf("%d", &startnum);
    int count = 0, newnum = startnum;
    while(1){
        a=newnum%10;
        b = (newnum/10 + newnum%10)%10;
        
        newnum=a*10+b;
        count++;
        if(startnum == newnum)break;

    }
    printf("%d", count);
    return 0;
}