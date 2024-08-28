#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;
vector<int> ans;
bool solve(int n){
    ans.push_back(vec[n]);
    if(ans.size()==7){
        int sum = 0;
        for(int i= 0; i<7; i++){
            sum += ans[i];
        }
        if(sum==100) return true;
        return false;
    }
    for(int i = n+1; i<9;i++){
        if(solve(i)){
            return true;
        };
        ans.pop_back();
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for(int i = 0; i<9;i++){
        int h;
        cin >> h;
        vec.push_back(h);
    }
    sort(vec.begin(),vec.end());
    for(int i = 0; i<3; i++){
        if(solve(i)){
            break;
        }else{
            ans.pop_back();
        }
    }
    for(int i = 0; i<7;i++){
        cout << ans[i] << '\n';
    }

    

    

}