#include <iostream>
using namespace std; 
int main()
{
    int a=1 ,b = 1;
    while(scanf("%d %d", &a, &b)>0 && (a==0 && b==0)==false){
        
        //if(a==0 && b==0)break;
        printf("%d\n", a+b);
    }
    return 0;
}