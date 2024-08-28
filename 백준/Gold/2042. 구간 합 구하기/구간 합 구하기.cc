#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long tree[1000001] = {0};
long long n, m, k;

long long sum(long long i){
        long long ans = 0;
        while(i > 0){
            ans += tree[i];
            i -= (i & -i);
        }
        return ans;
    }
    
void update(long long index, long long num){
    long long diff = num - (sum(index)-sum(index-1));
    while(index <= n){
        tree[index] += diff;
        index += (index & -index);
    }
}

void insert(long long index, long long num){
    tree[index] = num+sum(index-1)-sum(index-(index&-index));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for(int i = 1; i<=n; i++){
        long long x;
        cin >> x;
        insert(i,x);
    }
   int l = m+k;
    for(int i = 0; i<l; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        if(a==1)
            update(b,c);
        else if(a==2)
            cout << sum(c)-sum(b-1)<<'\n';
    }
}