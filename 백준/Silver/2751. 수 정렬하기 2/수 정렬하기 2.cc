#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n, temp;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    make_heap(arr.begin(), arr.end());
    for(auto i = arr.end(); i != arr.begin(); i--){
        pop_heap(arr.begin(), i);
    }
    for(int i = 0; i<n; i++){
        printf("%d\n", arr[i]);
    }

}