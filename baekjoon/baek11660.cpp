//11660번 구간 합 구하기 5
//답은 맞췄으나 다른 사람들 풀이가 더 짧았다.
//대각선 합을 구하고 넓이를 빼듯이 풀면 더 빠르더라.
//너무 대충푼듯
#include <iostream>
//#include <algorithm>
using namespace std;
long arr[1030][1030] = {0,};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            int num;
            cin >> num;
            arr[i][j] = arr[i][j-1] + num;
        }
    }
    for(int i = 0; i<m; i++){
        int x1, y1, x2, y2;
        long sum = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j<=x2; j++){
            sum += arr[j][y2]-arr[j][y1-1];
        }
        cout << sum << '\n';
    }
}