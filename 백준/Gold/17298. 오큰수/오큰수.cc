#include<iostream>
#include<stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    stack<int> s1;
    stack<int> s2;
    int n, m;
    cin >> n;
    int answer[n] = {0,};
    for(int i = 0 ; i<n; i++){
        cin >> m;
        s1.push(m);
    }
    for(int i = 0; i<n; i++){
        while(1){
            if(s2.empty()){
                answer[i] = -1;
                s2.push(s1.top());
                s1.pop();
                break;
            }
            else if(s1.top()<s2.top()){
                answer[i]=s2.top();
                s2.push(s1.top());
                s1.pop();
                break;
            }
            else{
                s2.pop();
            }

        }
    }
    for(int i = n -1; i>=0; i--){
        printf("%d ", answer[i]);
    }
}