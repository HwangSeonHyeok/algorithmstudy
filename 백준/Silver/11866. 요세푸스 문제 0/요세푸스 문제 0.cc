#include<iostream>
#include<algorithm>
#include <queue>
#include <vector>
using namespace std;



int main(){
    vector<int> vec;
    queue<int> q;
    int n, k;
    cin >> n >> k;
    for(int i = 1; i<=n;i++){
        q.push(i);
    }
    while(q.size()!=0){
        for(int i =1; i<k;i++){
            q.push(q.front());
            q.pop();
        }
        vec.push_back(q.front());
        q.pop();
    }
    printf("<%d", vec[0]);
    for(int i = 1; i<n; i++){
        printf(", %d", vec[i]);
    }
    printf(">");

}