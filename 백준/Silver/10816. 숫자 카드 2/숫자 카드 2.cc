#include<iostream>
#include<map>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    map<int,int> m;
    int n, o, num;
    cin>>n;
    for(int i  = 0; i<n; i++){
        cin >> num;
        if(m.count(num)){
            m[num]++;
        }
        else
            m[num] = 1;
    }
    cin >> o;
    for(int i  = 0; i<o; i++){
        cin >> num;
        if(m.count(num)){
            cout<< m[num]<<" ";
        }
        else
            cout<<0<<" ";
    }

}