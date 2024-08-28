#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(1){
        int n;
        long long result = 0;
        stack<pair<long long,long long>> s;
        cin >> n;
        if(n==0){
            break;
        }
        for(int i = 0; i<n; i++){
            int num;
            cin >> num;
            if(s.empty()||s.top().first<num){
                s.push(pair<long long,long long>(num,1));
            }else if(s.top().first==num){
                s.top().second++;
            }else{
                long long temp = 0;
                while((!s.empty())&&s.top().first>=num){
                    long long h = s.top().first, w = s.top().second+temp;
                    if(result < h*w){
                        result  = h*w;
                    }
                    temp = w;
                    s.pop();
                }
                s.push(pair<long long,long long>(num,temp+1));
            }
        }
        int temp = 0;
        while(!s.empty()){
            long long h = s.top().first, w = s.top().second+temp;
            if(result < h*w){
                        result  = h*w;
                    }
            temp = w;
            s.pop();
        }
        
        cout << result<<'\n';
    }
    
 
}