#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
long long fibomet[2][2]={{1,0},{0,0}};
long long metrix[2][2]={{1,1},{1,0}};
long long temp[2][2]={0,};
long long ans[2][2]={0,};
long long B;
void metmult(int n, long long b){
    long long num = 0;
    if(b==1){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                temp[i][j] = metrix[i][j]%1000000007;
                ans[i][j] = metrix[i][j]%1000000007;
            }
        }
    }
    else if(b%2==0){
        metmult(n,b/2);
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                for(int k = 0; k<n; k++){
                    num+=((temp[i][k]*temp[k][j])%1000000007);
                }
                ans[i][j] = num%1000000007;
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
                    num+=(temp[i][k]*temp[k][j])%1000000007;
                }
                ans[i][j] = num%1000000007;
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
                    num+=(temp[i][k]*metrix[k][j])%1000000007;
                }
                ans[i][j] = num%1000000007;
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
    long long n, num;
    cin >>n;
    if(n==0){
        cout << 0;
        return 0;
    }
    else if(n==1){
        cout << 1;
        return 0;
    }
    metmult(2,n-1);
    for(int i = 0; i<2; i++){
            for(int j = 0; j<2; j++){
                for(int k = 0; k<2; k++){
                    num+=(fibomet[i][k]*ans[k][j])%1000000007;
                }
                fibomet[i][j] = num%1000000007;
                num = 0;

            }
    }
    cout<<fibomet[0][0];
    
}