#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int n, ansph = 2e9, leftans, rightans;
vector<int> vec;

void twop(){
    int left = 0, right = vec.size()-1, ph;
    while(left<right){
        ph=vec[left]+vec[right];
        if(ph==0){
            leftans = vec[left];
            rightans = vec[right];
            break;
        }
        if(abs(ph)<ansph){
            ansph = abs(ph);
            leftans = vec[left];
            rightans = vec[right];
        }
        if(ph<0){
            left++;
        }
        else if(ph>0){
            right--;

        }

    }

}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int num;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    twop();
    cout << leftans << ' ' << rightans;
}