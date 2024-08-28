#include <iostream>
#include<vector>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    while(1){
        cin >> n;
        if(n==-1){
            break;
        }
        vector<int> v;
        int sum=0;
        for(int i =1; i<n; i++){
            if(n%i==0){
                sum+=i;
                v.push_back(i);
            }
        }
        if(sum==n){
            cout << n << " = ";
            for(int i= 0; i<v.size()-1; i++){
                cout << v[i] << " + ";
            }
            cout << v[v.size()-1];
        }else{
            cout << n << " is NOT perfect.";
        }
        cout << '\n';
        v.clear();

    }
    
}