#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool cmp(int a, int b){
    return a>b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector<int> v;

    cin >> n;

    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(),v.end(),cmp);
    for(int i = 0; i<n; i++){
        cout << v[i]<<'\n';
    }
    
    
    

    
}