#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int> v;
    int mean = 0;
    for(int i = 0; i<5; i++){
        int n;
        cin >> n;
        mean += n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    cout << mean/5 << '\n';
    cout << v[2];
    

    
}