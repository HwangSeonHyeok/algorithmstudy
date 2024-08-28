#include <iostream>
#include <algorithm>
using namespace std;
int N[500000];


int main(){
    int n,m;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> N[i];
    }
    sort(N,N+n);
    cin >> m;
    for(int i = 0; i<m; i++){
        int M;
        cin >> M;
        if(M>N[n-1]||M<N[0]){
            cout << 0 << ' ';
        }
        else{
            int right = n-1, left = 0, mid;
            while(1){
                mid = (left+right)/2;
                if(left > right){
                    cout << 0 << ' ';
                    break;
                }
                if(M==N[mid]){
                    cout << 1 << ' ';
                    break;
                }
                else if(M<N[mid]){
                    right = mid-1;
                    
                }
                else{
                    left = mid +1;
                }
                
            }
        }
    }
}
