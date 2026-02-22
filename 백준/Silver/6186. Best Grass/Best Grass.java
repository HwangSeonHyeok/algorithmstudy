import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
	static class Point {
		int y, x;

		public Point(int y, int x) {
			this.y = y;
			this.x = x;
		}

	}

	static int[] dx = { 1, 0, -1, 0 };
	static int[] dy = { 0, 1, 0, -1 };

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int r = Integer.parseInt(st.nextToken());
		int c = Integer.parseInt(st.nextToken());
		boolean[][] field = new boolean[r][c];
		for (int i = 0; i < r; i++) {
			String line = in.readLine();
			for (int j = 0; j < c; j++) {
				char state = line.charAt(j);
				if (state == '#') {
					field[i][j] = true;
				}
			}
		}
		boolean[][] visit = new boolean[r][c];
		int ans = 0;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (field[i][j] && !visit[i][j]) {
					ans++;
					Queue<Point> q = new ArrayDeque<Point>();
					visit[i][j] = true;
					q.add(new Point(i, j));
					while (!q.isEmpty()) {
						Point current = q.poll();
						for (int k = 0; k < 4; k++) {
							int nextY = current.y + dy[k];
							int nextX = current.x + dx[k];
							if (nextY >= 0 && nextY < r && nextX >= 0 && nextX < c && field[nextY][nextX]
									&& !visit[nextY][nextX]) {
								visit[nextY][nextX] = true;
								q.add(new Point(nextY, nextX));
							}
						}
					}
				}
			}
		}
		System.out.println(ans);
	}

}