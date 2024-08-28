#include <iostream>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        cout << s[0] << s[s.length()-1] << '\n';
    }
    
}