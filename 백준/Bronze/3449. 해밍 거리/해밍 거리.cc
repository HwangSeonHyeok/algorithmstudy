#include <iostream> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int ans = 0;
        string str1, str2;
        cin >> str1;
        cin >> str2;
        for(int j=0; j<str1.size();j++){
            if(str1[j]!=str2[j]){
                ans++;
            }
        }

        cout << "Hamming distance is " << ans << ".\n";
    }

}

