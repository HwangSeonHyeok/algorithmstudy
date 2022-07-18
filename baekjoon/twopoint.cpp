#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int ansph = 1e9, leftans, rightans, N;
bool PrimeArray[4000001];
vector<int> vec;

int twop(){
    int left = 0, right = 0, cnt = 0, sum = vec[left];
    while(right < vec.size()&& left < vec.size()){
        if(sum==N){
            cnt++;
            sum -= vec[left];
            left++;
        }
        else if(sum<N){
            right++;
            sum += vec[right];
        }
        else if(sum>N){
            sum -= vec[left];
            left++;
        }
        if(left>right){
            right = left;
        }
        
    }
    return cnt;

}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    if(N != 1){
        for(int i = 2; i <= N; i++){
            PrimeArray[i] = true;
        }
        for(int i = 2; i * i <= N; i++){
            if(PrimeArray[i]){
                for (int j = i * i; j <= N; j += i){
                    PrimeArray[j] = false;
                }
            }
        }
        PrimeArray[1] = false;
        for(int i = 0; i <= N; i++){
            if(PrimeArray[i])
                vec.push_back(i);
        }
    }
    else{
        cout << 0;
        return 0;
    }
    cout << twop();
    return 0;
}