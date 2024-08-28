
#include<iostream>
#include<unordered_map>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, ans = 0;
    unordered_map<string, int> m;
    cin >> n;
    for(int i = 0; i<n; i++){
        string str;
        int strsize;
        cin >> str;
        strsize = str.size();
        for(int j = 1; j<=strsize;j++){
            string sub = str.substr(strsize-j,j);
            if(m.find(sub) != m.end()){
                m[sub]++;
            }else{
                m[sub] = 1;
            }
        }

    }
    for(auto value : m){
        if(value.second%2==1){
            ans++;
        }
    }
    cout << ans;

	return 0;
}