#include <iostream> 
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i =0; i<t; i++){
        int n;
        unordered_map<string,int> map;
        cin >> n;
        for(int j = 0; j<n;j++){
            string num;
            cin >> num;
            map.insert(make_pair(num,1));
        }
        bool isYes = true;
        for(auto it = map.begin(); it!=map.end(); it++){
            string num = it -> first;
            for(int j = 1; j<num.length(); j++){
                string jubdu = num.substr(0,j);
                auto find = map.find(jubdu);
                if(find!=map.end()){
                    isYes = false;
                    break;
                }
                
            }
            if(!isYes){
                break;
            }
        }
        if(isYes){
            cout << "YES" <<'\n';
        }else{
            cout << "NO" <<'\n';
        }
    }
    
}