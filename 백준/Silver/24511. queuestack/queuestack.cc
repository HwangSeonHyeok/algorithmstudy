#include <iostream> 
#include <deque>
using namespace std;
bool isStack[100000] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    deque<int> dq;
    cin >> n;
    for(int  i = 0 ; i<n; i++){
        cin >> isStack[i];
    }
    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        if(!isStack[i]){
            dq.push_back(num);
        }
    }
    cin >> m;
    for(int i = 0; i<m; i++){
        int num;
        cin >> num;
        dq.push_front(num);
        cout << dq.back() << ' ';
        dq.pop_back();
    }
    
    
    
}