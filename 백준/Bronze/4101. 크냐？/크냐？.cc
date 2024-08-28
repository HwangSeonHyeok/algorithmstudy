#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(1){
        int n1,n2;
        cin >> n1 >> n2;
        if(n1==0&&n2==0){
            break;
        }
        if(n1>n2){
            cout << "Yes"<<'\n';
        }
        else{
            cout << "No"<<'\n';
        }
    }
    

}

