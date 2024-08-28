#include <iostream> 
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector<int> v;
    cin >> n;
    for(int i = 0; i<n; i++){
        int cmd;
        cin >> cmd;
        if(cmd == 1){
            int num;
            cin >> num;
            v.push_back(num);
        }else if(cmd == 2){
            if(v.size()==0){
                cout << -1 << '\n';
            }else{
                cout << v[v.size()-1]<<'\n';
                v.pop_back();
            }
        }else if(cmd == 3){
            cout << v.size()<<'\n';
        }
        else if(cmd == 4){
            if(v.empty()){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }else if(cmd == 5){
            if(v.empty()){
                cout << -1 << '\n';
            }else{
                cout << v[v.size()-1]<<'\n';
            }
        }
    }
    
    
}