#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<long long> vec1, vec2;
long long N, C, ans = 0;
long long arr[31];

void dfs(long long start, long long end, long long sum, vector<long long> &vec){
    if(sum>C){
        return ;
    }
    if(start == end){
        if(sum != 0){
            vec.push_back(sum);
        }
        return ;
    }
    dfs(start + 1, end, sum, vec);
    dfs(start + 1, end, sum + arr[start], vec);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N >> C;
    for(int i = 0; i<N; i++){
        cin >> arr[i];
    }
    dfs(0, N/2, 0, vec1);
    dfs(N/2, N, 0, vec2);
    ans = vec1.size() + vec2.size();
    sort(vec2.begin(), vec2.end());
    for(int  i = 0; i < vec1.size(); i++){
        ans += upper_bound(vec2.begin(), vec2.end(), C - vec1[i]) - vec2.begin();
    }
    
    cout << ans+1;
}