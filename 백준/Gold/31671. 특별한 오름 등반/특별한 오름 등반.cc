#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int N, M;
int mt[2001][1001] = { 0, };
/*
void bfs() {
	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));
	while (!q.empty()) {
		int curX = q.front().first, curY = q.front().second;
		q.pop();
		if (curX + 1 > 2 * N) continue;
		if (curY + 1 <= N && mt[curX + 1][curY + 1] != -1) {
			mt[curX + 1][curY + 1] = max(mt[curX + 1][curY + 1], max(mt[curX][curY], curY + 1));
			q.push(make_pair(curX + 1, curY + 1));
		}
		if (curY - 1 >= 0 && mt[curX + 1][curY - 1] != -1) {
			mt[curX + 1][curY - 1] = max(mt[curX + 1][curY - 1], max(mt[curX][curY], curY - 1));
			q.push(make_pair(curX + 1, curY - 1));
		}
	}

}
*/


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		mt[x][y] = -1;
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= i; j++) {
			if (mt[i][j] == -1 || (i+j)%2==1) continue;
			if (j - 1 >= 0 && mt[i-1][j-1]!=-1) {
				mt[i][j] = max(mt[i-1][j - 1], max(mt[i ][j], j));
			}
			if (j + 1 <=i-1 && mt[i-1][j+1] != -1) {
				mt[i][j] = max(mt[i-1][j + 1], max(mt[i][j], j));
			}
			if (mt[i][j] == 0) mt[i][j] = -1;
			//cout <<"x " << i << " y "<<j << ' '<< mt[i][j] << '\n';
		}
	}
	for (int i = N+1; i <= N * 2; i++) {
		for (int j = 0; j <= 2*N-i; j++) {
			if (mt[i][j] == -1 || (i + j) % 2 == 1) continue;
			if (j - 1 >= 0 && mt[i - 1][j - 1] != -1) {
				mt[i][j] = max(mt[i - 1][j - 1], max(mt[i][j], j));
			}
			if (j <= 2 * N - i && mt[i - 1][j + 1] != -1) {
				mt[i][j] = max(mt[i - 1][j + 1], max(mt[i][j], j));
			}
			if (mt[i][j] == 0) mt[i][j] = -1;
			//cout << "x " << i << " y " << j << ' ' << mt[i][j] << '\n';
		}
	}
	cout << mt[2 * N][0];
	/*
	if (mt[2 * N][0] != 0) {
		
	}
	else {
		cout << -1;
	}
	*/



}