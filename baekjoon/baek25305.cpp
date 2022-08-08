//25305번 커트라인
//오랜만에 퀵소트를 직접 구현하려니까 기억이안나서 구글에서 찾아봤다
//출처 : https://hongku.tistory.com/149
#include <iostream>
using namespace std;
void dessort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int pivot, i, j, tmp;
    pivot = s;
    i = pivot+1;
    j = e;
    while(i<=j){
        while(i <= e && arr[i]>= arr[pivot]){
            i++;
        }
        while(j > s && arr[j] < arr[pivot]){
            j--;
        }
        if(i > j){
            tmp = arr[j];
            arr[j] = arr[pivot];
            arr[pivot] = tmp;
        }else{
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }

    dessort(arr,s,j-1);
    dessort(arr,j+1,e);

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k,score[1001];
    cin >> n >> k;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        score[i] = x;
    }
    dessort(score, 0, n-1);
    cout << score[k-1];
}