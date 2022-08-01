//´ëÄª Â÷ÁıÇÕ
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    unordered_set<int> A,B;
    int a, b, cnt = 0;
    cin >> a >> b;
    for(int i = 0; i<a; i++){
        int num;
        cin >> num;
        A.insert(num);
    }
    for(int i = 0; i<b; i++){
        int num;
        cin >> num;
        if(A.find(num)==A.end()){
            B.insert(num);
        }else{
            cnt++;
        }
    }
    int num = A.size() + B.size() - cnt;
    cout << num;

}