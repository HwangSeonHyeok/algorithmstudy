#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n], y[n], rank[n];
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
        rank[i] = 1;
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            if(x[i] < x[j] && y[i] < y[j]){
                rank[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", rank[i]);
    }
    
}