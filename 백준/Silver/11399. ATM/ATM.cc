#include<algorithm>
#include <iostream>
using namespace std;


int main(){
    int n, ans = 0, temp = 0;
    cin >> n;
    int timearr[n]={0};
    for (int i = 0; i < n; i++){
        cin >> timearr[i];
    }
    sort(timearr,timearr+n);
    for(int i = 0; i < n; i++){
        temp += timearr[i];
        ans += temp;
    }
    cout << ans;


}