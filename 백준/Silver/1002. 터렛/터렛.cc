#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
using namespace std; 

int main(){
    double t, x1, y1, r1, x2, y2, r2, dis, maxr, minr;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        dis = sqrt((x1-x2)*(x1-x2) + (y1-y2) * (y1-y2));
        if(r1>r2){
            maxr = r1;
            minr = r2;
        }
        else {
            maxr = r2;
            minr = r1;
        }
        if(x1 == x2 && y1 == y2 && r1 == r2)
            printf("-1\n");
        else if(dis<maxr){
            if(dis < maxr - minr) printf("0\n");
            else if(dis > (maxr-minr)) printf("2\n");
            else printf("1\n");
        }
        else{
            if(dis < maxr + minr) printf("2\n");
            else if(dis > maxr+minr) printf("0\n");
            else printf("1\n");
        }


    }
    
    


}