#include <iostream> 
#include <map>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,cnt=0;
    string str;
    map<string,int> m;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> str;
        if(str=="ENTER"){
            m.clear();
        }else{
            if(m.find(str)==m.end()){
                m[str] == 1;
                cnt++;
            }
        }
    }
    cout << cnt;
    

}