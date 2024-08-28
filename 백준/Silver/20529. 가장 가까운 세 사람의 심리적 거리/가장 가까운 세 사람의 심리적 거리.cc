#include <iostream> 
#include <vector>
using namespace std;

int cal(string a, string b){
    int result = 0;
    for(int i = 0; i<4;i++){
        if(a[i]!=b[i]) result ++;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n;
        vector<string> v;
        cin >> n;
        for(int j=0; j<n; j++){
            string s;
            cin >> s;
            v.push_back(s);
        }
        if(n>=33){
            cout << 0 << '\n';
        }else{
            int ans = 1e9;
            for(int j = 0; j<n-2;j++){
                for(int k = j+1; k<n-1;k++){
                    for(int l = k+1;l<n;l++){
                        int dist = cal(v[j],v[k]) + cal(v[k],v[l]) + cal(v[l],v[j]);
                        ans = min(ans, dist);
                    }
                }
            }
            cout << ans <<'\n';
        }
    }
    
}