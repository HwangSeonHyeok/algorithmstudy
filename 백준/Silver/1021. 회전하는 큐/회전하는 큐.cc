#include<iostream>
#include<deque>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, cnt = 0,index;
    deque<int> dq;
    cin >> n >> m;
    int arr[m];
    for(int i = 0; i<m; i++){
        cin >> arr[i];
    }
    for(int i = 1; i<=n; i++){
        dq.push_back(i);
    }
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n;j++){
            if(arr[i] == dq.at(j)){
                index = j;
                break;
            }
        }
        if(index<=dq.size()/2){
            for(int j = 0; j<index;j++){
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }
        else{
            for(int j = 0; j<dq.size()-index; j++){
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
        
        dq.pop_front();

    }
    cout << cnt;
}