#include <iostream>
#include <algorithm>
using namespace std;

typedef struct {
    int x;
    int y;
}Position;
bool cmp(Position a, Position b){
    if(a.x == b.x)
        return a.y < b.y;
    else
        return a.x<b.x;
}


int main(){
	int n;
    cin >> n;
    int tempx, tempy;
    Position* arr =new Position[n];
    for(int i = 0; i < n; i++){
       scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    sort(arr,arr+n,cmp);
    for(int i = 0; i < n; i++){
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
}