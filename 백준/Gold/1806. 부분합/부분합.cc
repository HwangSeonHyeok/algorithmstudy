#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int ansph = 1e9, leftans, rightans, N, S;
vector<int> vec;

int twop(){
    int left = 0, right = 0, cnt = 0, ans = 1e9, sum = vec[left];
    while(right < vec.size()&& left < vec.size()){
        cnt = right - left + 1;
        if(sum>=S){
            if(cnt<ans){
                ans = cnt;
            }
            if(left==right){
                return 1;
            }
            sum -= vec[left];
            left++;
        }
        else if(sum<S){
            right++;
            sum += vec[right];
        }
        
    }
    return ans;

}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num, ans;
    cin >> N >> S;
    for(int i = 0; i<N; i++){
        cin >> num;
        vec.push_back(num);
    }
    ans = twop();
    if(ans>100000){
        cout << 0;
    }
    else{
        cout << ans;
    }
}