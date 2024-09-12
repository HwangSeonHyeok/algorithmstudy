import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Queue;

public class Main {
	static class Point{
		int x,y;

		public Point(int x, int y) {
			this.x = x;
			this.y = y;
		}
	}
	
	static int getDist(Point a, Point b) {
		return Math.abs(a.x-b.x)+Math.abs(a.y-b.y);
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(in.readLine());
		for(int tc = 0; tc<t; tc++) {
			int n = Integer.parseInt(in.readLine());
			Point[] pArr = new Point[n+2];
			for(int i = 0; i<=n+1;i++) {
				String[] split = in.readLine().split(" ");
				pArr[i] = new Point(Integer.parseInt(split[0]),Integer.parseInt(split[1]));
			}
			int[][] dist = new int[n+2][n+2];
			for(int i = 0; i<=n+1;i++) {
				for(int j = 0; j<=n+1;j++) {
					if(i==j) continue;
					dist[i][j] = getDist(pArr[i],pArr[j]);
				}
			}
			boolean[] visited = new boolean[n+2];
			Queue<Integer> q = new ArrayDeque<>();
			q.add(0);
			visited[0] = true;
			while(!q.isEmpty()) {
				int current = q.poll();
				for(int i = 0;i<n+2;i++) {
					if(!visited[i]&&dist[current][i]<=1000) {
						visited[i] = true;
						q.add(i);
					}
				}
			}
			if(visited[n+1]) {
				System.out.println("happy");
			}else {
				System.out.println("sad");
			}
		}
	}

}