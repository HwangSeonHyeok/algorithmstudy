import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.PriorityQueue;

public class Main {
	
	static class Point implements Comparable<Point>{
		int y, x;

		public Point(int y, int x) {
			this.y = y;
			this.x = x;
		}

		@Override
		public int compareTo(Point o) {
			return o.x-this.x;
		}

		@Override
		public String toString() {
			return "Point [y=" + y + ", x=" + x + "]";
		}
		
		
	}
	
	static int r,c,ans;
	
	static int[] dy = {-1,0,1};
	static boolean find;
	static void dfs(int y,int x) {
		if(find)return;
		if(x==c-1) {
			find = true;
			ans++;
			return;
		}
		for(int i = 0; i<3;i++) {
			int nextY = y+dy[i];
			int nextX = x+1;
			if(nextY>=0&&nextY<r&&!visited[nextY][nextX]) {
				visited[nextY][nextX]=true;
				dfs(nextY,nextX);
				if(find) return;
			}
		}
	}
	
	static boolean[][] visited;
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		r = Integer.parseInt(split[0]);
		c = Integer.parseInt(split[1]);
		visited = new boolean[r][c];
		for(int i = 0; i<r;i++) {
			String line = in.readLine();
			for(int j = 0; j<c; j++) {
				if(line.charAt(j)=='x') {
					visited[i][j]=true;
				}
			}
		}
		for(int i = 0; i<r;i++) {
			find = false;
			visited[i][0] = true;
			dfs(i,0);
		}
		System.out.println(ans);
		

	}

}