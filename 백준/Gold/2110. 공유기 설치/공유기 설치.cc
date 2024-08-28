#include<iostream>
#include<algorithm>
using namespace std;
int x[200001]={0,};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, C, right, mid, left, start, set,ans;
    cin >> N >> C;
    for(int i = 0; i<N;i++){
        cin>>x[i];
    }
    sort(x,x+N);
    right = x[N-1]-x[0];
    left = 1;
    while(left<=right){
        mid = (right+left)/2;
        start = 0;
        set = 1;//설치 공유기수
        for(int i = 1; i<N;i++){
            if(mid<=x[i]-x[start]){
                start = i;
                set++;
            }
        }
        if(set>=C){
            left = mid+1;
            ans=mid;
        }
        else{
            right=mid-1;
        }

    }
    cout << ans;


}