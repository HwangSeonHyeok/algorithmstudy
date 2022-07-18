#include<iostream>
#include<algorithm>
using namespace std;
int INF = 1e9;
int disarr[101][101] = {0};
int n, m;
void floyd(){
    for(int mid = 1; mid<=n; mid++){
        for(int start = 1; start<=n; start++){
            for(int des = 1; des<=n; des++){
                if(disarr[start][des]>disarr[start][mid] + disarr[mid][des]){
                    disarr[start][des] = disarr[start][mid] + disarr[mid][des];
                }
            }
        }

    }
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b, c;
    cin >> n;
    cin >> m;
    for(int i = 1; i<=n; i++){
        for(int j = 1 ; j<=n; j++){
            if(i!=j){
                disarr[i][j] = INF;
            }
        }
    }
    for(int i = 0; i<m; i++){
        cin >> a >> b >> c;
        disarr[a][b] = min(disarr[a][b],c);
    }
    floyd();
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(disarr[i][j] >= INF){
                cout << "0" << " ";
            }
            else{
                cout << disarr[i][j] << " ";
            }
        }
        cout << '\n';
    }

}