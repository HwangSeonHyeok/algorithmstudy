#include <iostream>
using namespace std; 
int main()
{
    int startnum, a, b;
    scanf("%d", &startnum);
    int cycle = 0, newnum =startnum;
    while(startnum != newnum || cycle == 0)
    {
        if (newnum<10) 
        {
        a = newnum;
        b = 0;}
        else
        {
            a = newnum%10;
        b = (newnum/10 + a)%10;}
        newnum = a*10 + b;
        cycle++;
        
    }
    printf("%d", cycle);

}