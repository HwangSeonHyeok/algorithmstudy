#include <iostream> 
#include <vector>
using namespace std;
vector<int> v;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    
    int M,P,L,E,R,S,N;
    while(cin >> M >> P >> L >> E >> R >> S >> N){
        int mosquito = M, bundae = P, egg = L, tmp;
        for(int i = 0; i<N;i++){
            tmp = mosquito*E;
            mosquito = bundae/S;
            bundae = egg/R;
            egg = tmp;
        }
        cout << mosquito << '\n';

    }

    
    
    


}

