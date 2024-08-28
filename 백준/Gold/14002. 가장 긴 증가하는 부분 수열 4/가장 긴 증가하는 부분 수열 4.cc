#include<iostream>
#include <stack>
using namespace std;
int dp[1001][2]={0,};
int arr[1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, length = 0, idx=0;
    stack<int> s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i<n; i++){
        int maxidx= -1;
        int maxvalue = 0;
        for(int j= 0; j<n; j++){
            if(arr[j]<arr[i]&& dp[j][0]>maxvalue){
                maxvalue = dp[j][0];
                maxidx = j;
            }
        }
        dp[i][0] = maxvalue+1;
        dp[i][1] = maxidx;
    }
    
    for(int i= 0; i<n; i++){
        if(length<dp[i][0]){
            length = dp[i][0];
            idx = i;
        }    
    }
    while(1){
        s.push(arr[idx]);
        idx = dp[idx][1];
        if(idx==-1){
            break;
        }
    }
    cout << length << '\n';
    while(!s.empty()){
        cout << s.top() <<' ';
        s.pop();
    }


    

    


    
}