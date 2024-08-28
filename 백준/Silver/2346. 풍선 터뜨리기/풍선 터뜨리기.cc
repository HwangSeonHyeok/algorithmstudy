#include <iostream> 
#include <deque>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    deque<pair<int,int>> dq;
    cin >> n;
    for(int i = 1; i<=n; i++){
        int ballon;
        cin >> ballon;
        dq.push_back(pair<int,int>(i,ballon));
    }
    while(!dq.empty()){
        int next = dq.front().second;
        cout << dq.front().first<<' ';
        dq.pop_front();
        if(next >0){
            for(int i = 0; i<next-1; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }else{
            for(int i = 0; i>next; i--){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }

    }
    
}