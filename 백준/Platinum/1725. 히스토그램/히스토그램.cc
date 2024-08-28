#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    int result = 0;
    stack<pair<int,int>> s;
    cin >> n;
    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        if(s.empty()||s.top().first<num){
            s.push(pair<int,int>(num,1));
        }else if(s.top().first==num){
            s.top().second++;
        }else{
            int temp = 0;
            while((!s.empty())&&s.top().first>=num){
                int h = s.top().first, w = s.top().second+temp;
                if(result < h*w){
                    result  = h*w;
                }
                temp = w;
                s.pop();
            }
            s.push(pair<int,int>(num,temp+1));
        }
    }
    int temp = 0;
    while(!s.empty()){
        int h = s.top().first, w = s.top().second+temp;
        if(result < h*w){
                    result  = h*w;
                }
        temp = w;
        s.pop();
    }
    
    cout << result;
    
 
}