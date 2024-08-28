#include<iostream>
#include<algorithm>
using namespace std;
int arr[1000001] = {0,};
int lis[1000001] = {0,};



int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, right, left, mid, index, cnt = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    lis[0]=arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]>lis[cnt]){
            cnt++;
            lis[cnt]=arr[i];
        }
        else{
            right = cnt;
            left = 0;
            index = cnt;
            while(left<=right){
                mid = (right + left)/2;
                if(lis[mid]<arr[i]){
                    left = mid+1;
                }
                else{
                    if(index>mid&&lis[index]!=arr[i]){
                        index = mid;
                    }
                    right=mid-1;
                }
            }
            lis[index] = arr[i];
        }
        
    }
    cout << cnt+1;
}