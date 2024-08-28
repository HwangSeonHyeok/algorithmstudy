#include <iostream> 
#include <algorithm>
#include<vector>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n,k, ans = 0;
    vector<long long> minusvec, plusvec;
    cin >> n >> k;
    for(int i = 0; i<n; i++){
        long long cp;
        cin >> cp;
        if(cp<0){
            minusvec.push_back(-cp);
        }else{
            plusvec.push_back(cp);
        }
    }
    sort(minusvec.begin(),minusvec.end());
    sort(plusvec.begin(),plusvec.end());
    long long cnt = 0;
    int index = minusvec.size()-1;
    while(index>=0){
        ans += minusvec[index]*2;
        index -= k;
    }
    index = plusvec.size()-1;
    while(index>=0){
        ans += plusvec[index]*2;
        index -= k;
    }
    cout << ans;

    
    
}