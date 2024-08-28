#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int t,n;
    string itemname, category;  
    cin >> t;
    for(int i = 0; i<t; i++){
        map<string,int>cloth;
        cin>>n;
        for(int j = 0; j<n; j++){
            cin >> itemname >> category;
            if(cloth.find(category)!=cloth.end()){
                cloth[category]++;
            }
            else{
                cloth.insert({category,1});
            }
        }
        int ans = 1;
        for(auto iter:cloth){
            ans *= (iter.second +1);
        }
        ans -= 1;
        cout << ans << "\n";
    }



}
