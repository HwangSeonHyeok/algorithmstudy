#include <iostream>
#include <algorithm>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int minx = 10001, maxx = -10001, miny = 10001, maxy = -10001, n, ans;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        minx = min(minx,x);
        maxx = max(maxx,x);
        miny = min(miny, y);
        maxy = max(maxy,y);
    }
    int width = maxx-minx, height = maxy - miny;
    ans = width*height;
    cout << ans;
    
}