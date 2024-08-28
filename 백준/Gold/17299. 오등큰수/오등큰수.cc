#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int arr[1000001] = {0,};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector<int> v;
    stack<int> s1,result;
    cin >> n;
    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        v.push_back(num);
        arr[num]++;
    }
    for(int i = v.size()-1; i>=0; i--){
        while(1){
            if(s1.empty()){
                result.push(-1);
                break;
            }else{
                if(arr[s1.top()]>arr[v[i]]){
                    result.push(s1.top());
                    break;
                }else{
                    s1.pop();
                }
            }
        }
        s1.push(v[i]);
    }

    while(!result.empty()){
        cout<<result.top()<< ' ';
        result.pop();
    }

    
}