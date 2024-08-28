#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
bool exist[50001] = {0,};
bool paircmp(pair<int,int> p1, pair<int,int> p2){
    return p1.first>p2.first;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector<int> vec, ans;
    vector<pair<int,int>> indexvec;
    cin >> n;
    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        vec.push_back(num);
        indexvec.push_back(make_pair(num,i));
        exist[i] = true;
    }
    sort(indexvec.begin(),indexvec.end(),paircmp);
    int cnt = n, j = 0;
    while(cnt>0){
        bool flag = true;
        int curmine = indexvec[j].first, idx = indexvec[j].second;
        if(exist[idx]){
            ans.push_back(idx+1);
            exist[idx] = false;
            cnt--;
            int curidx = idx;
            while(flag){
                if(curidx == 0) break;
                if(exist[curidx-1]&&(vec[curidx]>vec[curidx-1])){
                    exist[curidx-1] = false;
                    cnt--;
                }else{
                    flag = false;
                }
                curidx--;
            }
            flag = true;
            curidx = idx;
            while(flag){
                if(curidx == n-1) break;
                if(exist[curidx+1]&&(vec[curidx]>vec[curidx+1])){
                    exist[curidx+1] = false;
                    cnt--;
                }else{
                    flag = false;
                }
                curidx++;
            }
        }
        j++;
    }
    sort(ans.begin(),ans.end());
    for(auto idx : ans){
        cout << idx << '\n';
    }
    
    
    
    
}