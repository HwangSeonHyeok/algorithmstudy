#include <iostream> 

using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >>t;
    for(int i = 0; i<t;i++){
        int x,y,z, ans = 0;;
        cin >> x >>y>> z;
        for(int j = 1; j<=x;j++){
            for(int k =1; k<=y; k++){
                for(int l = 1; l<=z; l++){
                    int xmody = j%k;
                    int ymodz = k%l;
                    int zmodx = l%j;
                    if(xmody==ymodz&&ymodz==zmodx){
                        ans++;
                    }
                }
            }
        }
        cout << ans <<'\n';
    }

    
    
}