#include <iostream> 
#include <map>
using namespace std;
bool isStack[100000] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    map<string,int> m;
    m["ChongChong"] = 1;
    cin >> n;
    for(int i = 0; i<n; i++){
        string p1, p2;
        cin >> p1 >> p2;
        if(!(m.find(p1)==m.end()&&m.find(p2)==m.end())){
            m[p1] = 1;
            m[p2] = 1;
        }
    }
    cout << m.size();

}