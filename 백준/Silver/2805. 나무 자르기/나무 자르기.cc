#include<iostream>
#include<algorithm>
using namespace std;
int tree[1000001];
bool cmp(int a, int b){
    return a>b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, M, h, cut=0, index=0;
    cin >> N >> M;
    for(int i = 0; i<N;i++){
        cin >> tree[i];
    }
    sort(tree,tree+N,cmp);
    h = tree[0]-1;
    while(cut<M){
        if(tree[index]>h){
            cut+=tree[index]-h;
            index++;
        }
        else{
            h--;
            cut+=index;
        }
           
    }
    cout << h;
}