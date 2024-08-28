#include <iostream> 
#include <vector>
using namespace std;

int k, cnt = 0, result = -1;

void merge(vector<int> &A, int p, int q, int r){
    int i = p, j = q+1, t;
    vector<int> tmp;
    while(i<=q && j<=r){
        if(A[i] <= A[j]){
            tmp.push_back(A[i++]);
            
        }else{
            tmp.push_back(A[j++]);
        }
    }
    while(i<=q){
        tmp.push_back(A[i++]);
    }
    while(j<=r){
        tmp.push_back(A[j++]);
    }
    i = p; t= 0;
    while(i<=r){
        A[i++] = tmp[t++];
        cnt++;
        if(cnt == k){
            result = A[i-1];
        }
    }
}
void merge_sort(vector<int> &A, int p, int r){
    if(p<r){
        int q = (p+r)/2;
        merge_sort(A, p, q);
        merge_sort(A, q+1,r);
        merge(A,p,q,r);
    }
}






int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector<int> v;
    cin >> n >> k;
    for(int i= 0 ; i<n; i++){
        int num;
        cin >> num;
        v.emplace_back(num);
    }
    merge_sort(v,0,n-1);
    cout << result;

    

}