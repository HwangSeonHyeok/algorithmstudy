#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    long long result = 0;
    vector<int> v;
    stack<int> s1,bigger;
    cin >> n;
    for(int i = 0; i<n;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    for(int i = 0; i<v.size();i++){
        while(1){
            if(s1.empty()){
                s1.push(v[i]);
                bigger.push(s1.size());
                break;
            }else{
                if(v[i]>s1.top()){
                    result++;
                    s1.pop();
                    bigger.pop();
                }else if(v[i]<s1.top()){
                    result++;
                    bigger.push(s1.size());
                    s1.push(v[i]);
                    break;
                }else{
                    result+=(s1.size()-bigger.top()+1);
                    s1.push(v[i]);
                    bigger.push(bigger.top());
                    break;
                }
            }
        }
    }
    cout << result;
 
}