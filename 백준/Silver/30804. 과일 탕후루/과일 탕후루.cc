#include <iostream>
#include <queue>
using namespace std;

int fruits[10] = {0,};
int tanghuru[200001] = {0,};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int kind = 0, ans = 0,total=0, left = 0, right = 0;
    for(int i = 0; i<n; i++){
        int f;
        cin >> f;
        tanghuru[i] = f;
    }
    while(right<n){
        if(kind>2){
            fruits[tanghuru[left]]--;
            if(fruits[tanghuru[left]]==0){
                kind--;
            }
            left++;
            total--;
        }else{
            fruits[tanghuru[right]]++;
            if(fruits[tanghuru[right]]==1){
                kind++;
            }
            total++;
            right++;
            if(kind<=2){
                ans= max(ans,total);
            }
        }
        
    }

    cout <<  ans;




   
   

}