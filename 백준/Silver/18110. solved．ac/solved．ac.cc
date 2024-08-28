#include <iostream> 
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector<int> v;
    cin >> n;
    for(int i = 0; i<n; i++){
        int o;
        cin >> o;
        v.push_back(o);
    }
    sort(v.begin(), v.end());
    int excep;
    float result=0;
    excep = round(n*0.15);
    for(int i = excep; i< v.size()-(excep); i++){
        result += v[i];
    }
    if(n==0){
        cout << 0;
    }else{
        cout << round(result/(v.size()-(excep*2)));
    }
    

}