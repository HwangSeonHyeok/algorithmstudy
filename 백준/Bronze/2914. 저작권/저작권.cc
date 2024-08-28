#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, ans;
    cin >> n >>m;
    ans = n*(m-1)+1;
    cout << ans;
}