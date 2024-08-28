#include <iostream> 
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,u,d;
    int arr[4] = {0,};
    vector<int> vec;
    cin >> n;
    for(int i = 0; i<n; i++){
        int type;
        cin >> type;
        arr[type]++;
        vec.push_back(type);
    }
    cin >> u >> d;
    if(u<arr[1]|| d<arr[2]){
        cout<< "NO";
    }else{
        cout << "YES\n";
        int u3 = u - arr[1];
        for(int i = 0; i<n;i++){
            if(vec[i]==1){
                u--;
                cout << "U";
            }else if(vec[i]==2){
                d--;
                cout << "D";
            }else if(vec[i]==3&&u3>0){
                u3--;
                cout << "U";
            }else{
                cout << "D";
            }
        }
    }


    

    
    
    


}

