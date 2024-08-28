#include<iostream>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long K,N, cm, longest=0;
    long long wire[10001]={0, };
    cin >> K >> N;
    for(int i = 0; i<K;i++){
        cin >> wire[i];
        if(wire[i]>longest){
            longest = wire[i];
        }
    }
    long long left=1,right=longest,mid,total=0, ans=0;
    while(right>=left){
        mid=(right+left)/2;
        total=0;
        for(int i = 0; i<K;i++){
            total += wire[i]/mid;
        }
        if(total<N){
            right = mid-1;
            
        }
        else{
            if(ans<mid){
                ans=mid;
            }
            left = mid+1;
        }
    }
    cout<<ans; 
}