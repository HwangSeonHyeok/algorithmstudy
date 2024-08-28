#include <iostream>
#include <vector>
#include <map>
using namespace std;




int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n,ans=0;
        vector<int> v;
        map<int,int> m;
        cin >> n;
        for(int j = 0; j<n; j++){
            int x;
            cin >> x;
            m.insert(make_pair(x,1));
            v.push_back(x);
        }
        for(int j = 0; j<n;j++){
            for(int k=j+1; k<n;k++){
                if((v[k]+v[j])%2==0){
                    int middle = (v[k]+v[j])/2;
                    if(m.find(middle)!=m.end()){
                        ans++;
                    }
                }
            }
        }
        cout << ans << '\n';
        

    }
    
}