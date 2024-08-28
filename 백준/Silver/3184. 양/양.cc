#include <iostream>
#include <queue>
using namespace std;

char madang[251][251] = { 0, };
bool visited[251][251] = { 0, };
int sheep = 0, wolf = 0;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = {0, 0, 1, -1};
int r, c;

void bfs(int startY, int startX) {
	queue<pair<int, int>> q;
	visited[startY][startX] = true;
	q.push(make_pair(startY, startX));
	int fieldSheep = 0, fieldWolf = 0;
	while (!q.empty()) {
		int curY = q.front().first, curX = q.front().second;
		
		q.pop();
		if (madang[curY][curX] == 'o') {
			fieldSheep++;
		}
		else if (madang[curY][curX] == 'v') {
			fieldWolf++;
		}
		for (int i = 0; i < 4; i++) {
			int nextY = curY + dy[i];
			int nextX = curX + dx[i];
			if (nextY >= r || nextY < 0 || nextX >= c || nextX < 0 || madang[nextY][nextX] == '#') {
				continue;
			}
			if (!visited[nextY][nextX]) {
				
				visited[nextY][nextX] = true;
				q.push(make_pair(nextY, nextX));
			}
			

		}

	}
	
	if (fieldSheep > fieldWolf) {
		//cout << '!'<< '\n';
		wolf = wolf - fieldWolf;
	}
	else {
		//cout << '?' << '\n';
		sheep = sheep - fieldSheep;
	}
}



int main()
{

	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> madang[i][j];
			if (madang[i][j] == 'o') {
				sheep++;
			}
			else if (madang[i][j] == 'v') {
				wolf++;
			}
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (!visited[i][j]&&madang[i][j]!='#') {
				bfs(i, j);
			}
		}
	}
	cout << sheep << ' ' << wolf;

	
}

