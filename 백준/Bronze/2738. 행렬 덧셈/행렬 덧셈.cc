#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int mat1[n][m], mat2[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>mat1[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>mat2[i][j];
            mat1[i][j] += mat2[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<mat1[i][j]<< " ";
        }
        cout<<"\n";
    }

}
