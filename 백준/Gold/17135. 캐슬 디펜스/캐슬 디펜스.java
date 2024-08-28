import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class Main {

	static class Target {
		int x, y, dis;

		public Target(int x, int y) {
			this.x = x;
			this.y = y;
		}

		public Target(int x, int y, int dis) {
			this.x = x;
			this.y = y;
			this.dis = dis;
		}

		@Override
		public String toString() {
			return "Target [x=" + x + ", y=" + y + "]";
		}
	}

	static int N, M, D, score = 0, ans = 0;
	static int map[][];
	static int[][] tmpmap;
	static int archer[] = new int[3];
	static int[] dx = { -1, 0, 1 };
	static int[] dy = { 0, -1, 0 };
	static boolean[][] visited;
	static List<Target> targetList = new ArrayList<>();

	static void bfs(int curX, int curY) {

		if (tmpmap[curY][curX] == 1) {
			Target t = new Target(curX, curY);

			targetList.add(t);
			return;
		} else {
			Queue<Target> q = new LinkedList<>();
			visited[curY][curX] = true;
			q.add(new Target(curX, curY, 1));
			while (!q.isEmpty()) {
				int currentX = q.peek().x;
				int currentY = q.peek().y;
				int currentDis = q.peek().dis;
				q.poll();
				if (currentDis >= D)
					continue;
				for (int i = 0; i < 3; i++) {
					int nextX = currentX + dx[i];
					int nextY = currentY + dy[i];

					if (nextX < 0 || nextY < 0 || nextX >= M || nextY >= N)
						continue;
					if (tmpmap[nextY][nextX] == 1) {
						Target t = new Target(nextX, nextY);

						targetList.add(t);
						return;
					}
					if (currentDis < D && !visited[nextY][nextX]) {
						visited[nextY][nextX] = true;
						q.add(new Target(nextX, nextY, currentDis + 1));
					}

				}
			}

		}

	}

	private static void combination(int cnt, int start) {

		// 기저부분
		if (cnt == 3) {
			tmpmap = new int[N][M];
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					tmpmap[i][j] = map[i][j];
				}
			}
			score = 0;
			for (int i = N - 1; i >= 0; i--) {

				targetList.clear();
				visited = new boolean[N][M];
				for (int j = 0; j < 3; j++) {
					bfs(archer[j], i);

				}
				for (int k = 0; k < targetList.size(); k++) {

					Target t = targetList.get(k);
					int x = t.x;
					int y = t.y;
					if (tmpmap[y][x] == 1) {
						score++;
						tmpmap[y][x] = 0;
					}
				}

				for (int j = 0; j < M; j++) {

					tmpmap[i][j] = 0;
				}
			}
			if (ans < score) {
				ans = score;
			}

			return;
		}

		// 유도부분
		for (int i = start; i < M; i++) { // 선택지

			archer[cnt] = i;

			combination(cnt + 1, i + 1);

		}

	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		N = Integer.parseInt(split[0]);
		M = Integer.parseInt(split[1]);
		D = Integer.parseInt(split[2]);

		map = new int[N][M];

		for (int i = 0; i < N; i++) {
			String[] split2 = in.readLine().split(" ");
			for (int j = 0; j < M; j++) {
				map[i][j] = Integer.parseInt(split2[j]);
			}
		}
		combination(0, 0);

		System.out.println(ans);

	}

}