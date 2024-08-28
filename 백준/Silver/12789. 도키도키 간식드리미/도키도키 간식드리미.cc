#include <iostream> 
#include <stack>
#include<queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, next=1;
    stack<int>  s;
    queue<int> q;
    cin >> n;
    for(int i = 0; i<n; i++){
        int num;
        cin >>num;
        q.push(num);
    }
    
    while(1){        
        if(q.empty()&& s.top()!=next){
            cout << "Sad";
            break;

        }
        else if(!q.empty()&&q.front()==next){
            q.pop();
            next++;
        }else if(!s.empty()&&s.top()==next){
            s.pop();
            next++;
        }else{
            s.push(q.front());
            q.pop();
        }
        if(next>n){
            cout << "Nice";
            break;
        }
        
    }

    
    
}