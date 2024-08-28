#include <iostream>
using namespace std;

bool impos[1000] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, ans = 0;
    cin >> n;
    for(int i = 123; i<=987;i++){
        string str = to_string(i);
        if(str[0]==str[1]||str[1]==str[2]||str[2]==str[0]){
            impos[i] = true;
        }
        if(str[0]=='0'||str[1]=='0'||str[2]=='0'){
            impos[i] = true;
        }
    }
    for(int i = 0; i<n;i++){
        string str;
        int s,b;
        cin >> str >> s >> b;
        for(int j = 123; j<=987;j++){
            string str2 = to_string(j);
            int s2 = 0, b2 = 0;
            for(int k = 0;k<3;k++){
                for(int l = 0; l<3; l++){
                    if(k==l && str[k]==str2[l]){
                        s2++;
                    }
                    if(k!=l && str[k]==str2[l]){
                        b2++;
                    }
                    
                }
            }
            if(s!=s2||b!=b2){
                        impos[j] = true;
            }
        }

    }
    for(int i = 123; i<=987;i++){
        if(!impos[i])ans++;
    }
    cout << ans;

    
}