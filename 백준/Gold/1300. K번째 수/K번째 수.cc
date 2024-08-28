#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k, right, left=0, mid, num, cnt = 0,ans=1000000000;
    cin >> n;
    cin >> k;
    if(n>sqrt(1000000000)){
        right = 1000000000;
    }
    else{
        right = n*n;
    }
    while(left<=right){
        cnt = 0;
        mid = (right+left)/2;
        for(int i = 1; i<=n; i++){
            num = mid/i;
            cnt+=min(n,num);
        }
        if(cnt>=k){
            right = mid-1;
            if(ans>mid){
                ans = mid;
            }
        }
        else if(cnt<k){
            left = mid+1;
        }
    }
    cout << ans;

}