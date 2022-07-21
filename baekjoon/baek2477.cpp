//Âü¿Ü¹ç
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k, dir[6], dis[6],maxx=0,maxy=0, i1, i2;
    int totalarea, emtarea;
    cin >> k;
    for(int i = 0; i<6; i++){
        cin>>dir[i] >> dis[i];
        if((dir[i] == 1 || dir[i] == 2)&&dis[i]>maxx){
            maxx = dis[i];
            i1= i;
        }
        else if((dir[i] == 3 || dir[i] == 4)&&dis[i]>maxy){
            maxy = dis[i];
            i2 = i;
        }
    }
    if((i1==0 && i2 == 5)||(i1==5 && i2 == 0)){
        emtarea = dis[min(i1,i2)+2]*dis[min(i1,i2)+3];
    }
    else if(min(i1,i2)==2){
        emtarea = dis[0]*dis[5];
    }
    else if(min(i1,i2)>=3){
        emtarea = dis[min(i1,i2)-2]*dis[min(i1,i2)-3];
    }else{
        emtarea = dis[max(i1,i2)+2]*dis[max(i1,i2)+3];
    }
    totalarea = maxx*maxy-emtarea;
    cout<<totalarea*k;

}
