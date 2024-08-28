#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a, b, c, d, e, ans = -50;
    cin >> a >> b >> c >> d >> e;
    ans += min(a,min(b,c))+min(d,e);
    cout << ans;
}