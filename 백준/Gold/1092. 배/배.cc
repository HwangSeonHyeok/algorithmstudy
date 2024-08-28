#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> crane;
vector<int> box;
int work[50] = {0,};
bool cmp(int a, int b){
    return a>b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n;
    for(int i = 0; i<n;i++){
        int w;
        cin >> w;
        crane.push_back(w);
    }
    cin >> m;
    for(int i = 0; i<m;i++){
        int w;
        cin >> w;
        box.push_back(w);
    }
    sort(crane.begin(),crane.end(),cmp);
    sort(box.begin(),box.end(),cmp);
    if(crane[0]<box[0]){
        cout << -1;
        return 0;
    }
    int currentc = 0;
    for(int i = 0; i<m;i++){
        while(!(crane[currentc]<box[i])){
            currentc++;
            if(currentc==n){
                break;
            }
        }
        int min = 1e9,minidx = 0;
        for(int j = 0; j<currentc;j++){
            if(min>work[j]){
                minidx= j;
                min = work[j];
            }
        }
        work[minidx]++;
    }
    int ans = -1;
    for(int i = 0; i<n;i++){
        ans = max(ans,work[i]);
    }
    cout << ans;
    return 0;



}