#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n, x, ans = 0;
vector<int> vec;

int twop(){
    int left = 0, right = vec.size()-1;
    while(left<right){
        if(vec[left]+vec[right]==x){
            ans++;
            left++;
        }
        else if(vec[left]+vec[right]<x){
            left++;
        }
        else if(vec[left]+vec[right]>x){
            right--;
        }

    }
    return ans;
}



int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> num;
        vec.push_back(num);
    }
    cin >> x;
    sort(vec.begin(),vec.end());
    cout << twop();
}