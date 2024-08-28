#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int metrix1[100][100]={0,};
    int metrix2[100][100]={0,};
    int ans[100][100]={0,};
    int n1,m1,n2,m2,num=0;
    cin >> n1 >> m1;
    for(int i = 0; i<n1;i++){
        for(int j = 0; j<m1; j++){
            cin >> metrix1[i][j];
        }
    }
    cin >> n2 >> m2;
    for(int i = 0; i<n2; i++){
        for(int j = 0; j<m2; j++){
            cin >> metrix2[i][j];
        }
    }
    for (int n = 0; n<n1; n++){
        for(int i = 0; i<m2; i++){
            for(int j = 0; j<n2; j++){
                num += metrix1[n][j] * metrix2[j][i];
            }
            ans[n][i] = num;
            num=0;
        }
    }
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<m2; j++){
            cout<< ans[i][j] << " ";
        }
            cout<<"\n";
    }
    

}
