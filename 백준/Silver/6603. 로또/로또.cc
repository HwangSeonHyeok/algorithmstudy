#include <iostream> 
#include <vector>
using namespace std;
vector<int> v;
void solve(vector<int> &nums, int depth,int start){
    if(depth==6){
        for(int num : v){
            cout << num << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = start; i<nums.size()-5+depth;i++){
        v.push_back(nums[i]);
        solve(nums,depth+1,i+1);
        v.pop_back();        
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    while(1){
        cin >> n;
        if(n==0) break;
        vector<int> nums;
        for(int i = 0; i<n;i++){
            int num;
            cin >> num;
            nums.push_back(num);
        }
        
        solve(nums, 0, 0);
        cout << '\n';
    }
    
    


}