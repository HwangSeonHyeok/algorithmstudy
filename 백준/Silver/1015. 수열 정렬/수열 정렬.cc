#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector <pair<int,int>> A;
    int n,P[1001];
    cin >> n;
    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        A.push_back(make_pair(num,i));
    }
    sort(A.begin(),A.end());
    for(int i = 0; i<n; i++){
        P[A[i].second] = i;
    }
    for(int i = 0; i<n; i++){
        cout << P[i] << ' ';
    }


}