#include<iostream>
using namespace std;
long long metrix[6][6]={0,};
long long temp[6][6]={0,};
long long ans[6][6]={0,};
long long B;
void metmult(int n, long long b){
    long long num = 0;
    if(b==1){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                temp[i][j] = metrix[i][j]%1000;
                ans[i][j] = metrix[i][j]%1000;
            }
        }
    }
    else if(b%2==0){
        metmult(n,b/2);
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                for(int k = 0; k<n; k++){
                    num+=((temp[i][k]*temp[k][j])%1000);
                }
                ans[i][j] = num%1000;
                num = 0;

            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                temp[i][j] = ans[i][j];
            }
        }
    }
    else if(b%2 == 1){
        metmult(n,b/2);
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                for(int k = 0; k<n; k++){
                    num+=(temp[i][k]*temp[k][j])%1000;
                }
                ans[i][j] = num%1000;
                num = 0;

            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                temp[i][j] = ans[i][j];
            }
        }
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                for(int k = 0; k<n; k++){
                    num+=(temp[i][k]*metrix[k][j])%1000;
                }
                ans[i][j] = num%1000;
                num = 0;

            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                temp[i][j] = ans[i][j];
            }
        }

    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N >> B;
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            cin >> metrix[i][j];
        }
    }
    metmult(N,B);
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            cout<< ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}
