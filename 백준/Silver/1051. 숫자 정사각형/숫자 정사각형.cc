#include <iostream> 
using namespace std;
char arr[51][51]  = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int maxlen  = 1;
    for(int i = 0;i<n; i++){
        if(i+maxlen>=n) break;
        for(int j = 0; j<m; j++){
            if(j+maxlen>=m)break;
            int curlen = maxlen;
            while(1){
                if(i+curlen>=n||j+curlen>=m) break;
                if(arr[i][j]== arr[i+curlen][j]&&arr[i][j] == arr[i][j+curlen] && arr[i][j] == arr[i+curlen][j+curlen])
                    maxlen = max(maxlen,curlen+1);
                curlen++;
            }
        }
    }
    int ans = maxlen*maxlen;
    cout << ans;
    
}