#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    vector<int> yaksoo;
    cin >> n >> k;
    for(int i = 1; i<=n;i++){
        if(n%i==0){
            yaksoo.push_back(i);
        }
    }
    if(yaksoo.size()>=k){
        cout<<yaksoo.at(k-1);
    }else{
        cout << 0;
    }

}