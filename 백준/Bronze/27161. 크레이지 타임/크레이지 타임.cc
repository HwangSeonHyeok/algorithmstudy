#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string clock;
    int n, x, time = 1;
    bool ascending = true;
    cin >>  n;
    for(int i=0; i<n; i++){
        cin >> clock >> x;
        if(clock != "HOURGLASS" && time == x){
            cout << time << " YES\n";
        }
        else cout << time << " NO\n";
        if(clock == "HOURGLASS" && time != x)
            ascending = !ascending;
        if(ascending)time++;
        else time--;
        if (time == 0) time = 12;
        if (time == 13) time = 1;
    }

}