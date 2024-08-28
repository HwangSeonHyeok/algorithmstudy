#include <iostream> 
#include <vector>
using namespace std;




int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    bool isEyfa = true;
    vector<string> strvec1, strvec2;
    cin >> n >> m;
    

    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        strvec1.push_back(str);    
    }
    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        strvec2.push_back(str);    
    }

    for(int i = 0; i<n; i++){
        string str = strvec1[i];
        for(int j = 0; j<m; j++){
            for(int k = 0; k<2; k++){
                if(strvec2[i][j*2+k]!=str[j]){
                    isEyfa = false;
                    
                }
            }
        }
        
    }

    if(isEyfa){
        cout << "Eyfa";
    }else{
        cout << "Not Eyfa";
    }
    

}