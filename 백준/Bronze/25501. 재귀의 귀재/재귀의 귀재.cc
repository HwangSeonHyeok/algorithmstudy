#include <iostream> 
using namespace std;

int count = 0;

int recursion(string& s, int l, int r){
    count++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(string& s){
    return recursion(s, 0, s.size()-1);
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, result;
    cin >> n;
    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        count = 0;
        cout << isPalindrome(str) << ' ' << count << '\n';
    }
    

}