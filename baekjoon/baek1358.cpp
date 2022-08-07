//гое╟
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int w,h,x,y,p,r,cnt = 0;
    cin >> w >> h >> x >> y >> p;
    r = h/2;
    for(int i = 0; i<p; i++){
        int px,py;
        cin >> px >> py;
        if((px>=x&&px<=x+w&&py>=y&&py<=y+h)||
        (pow(x-px,2)+pow(y+r-py,2)<=pow(r,2))||
        (pow(x+w-px,2)+pow(y+r-py,2)<=pow(r,2))){
            cnt++;
        }
    }
    cout << cnt;
}