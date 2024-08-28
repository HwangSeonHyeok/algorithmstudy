#include <iostream> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    string ans;
    cin >> n;
    for(int i = 0; i<n; i++){
        string name;
        cin >> name;
        if(name.find("S")!= string::npos){
            ans = name;
        }
    }
    cout<< ans;

}

