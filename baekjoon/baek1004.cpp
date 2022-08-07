//¾î¸°¿ÕÀÚ
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >>t;
    for(int i = 0; i<t;i++){
        int x1, y1, x2, y2, n, cnt = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        for(int j = 0; j<n; j++){
            int cx, cy, r;
            cin >> cx >> cy >> r;
            if((pow(r,2)-pow(cx-x1,2)-pow(cy-y1,2))*((pow(r,2)-pow(cx-x2,2)-pow(cy-y2,2)))<0){
                cnt++;
            }
        }
        cout << cnt <<'\n';
    }
}