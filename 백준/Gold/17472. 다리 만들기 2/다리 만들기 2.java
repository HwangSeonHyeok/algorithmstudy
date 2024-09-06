import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.List;
import java.util.Queue;

public class Main {
	static int[][] map;
	static class Point {
		int y,x;

		public Point(int y, int x) {
			this.y = y;
			this.x = x;
		}
		
	}
	static class Island{
		int no;
		Point startPoint;
		public Island(int no, Point startPoint) {
			super();
			this.no = no;
			this.startPoint = startPoint;
		}
	
	}
	
	
	static void dfs(int depth, int y, int x, int dir, int iNo) {
		int nextY = y+dy[dir];
		int nextX = x+dx[dir];
		if(nextY>=0&&nextX>=0&&nextY<n&&nextX<m) {
			if(map[nextY][nextX]==0) {
				dfs(depth+1,nextY,nextX,dir,iNo);
			}else if(map[nextY][nextX]!=iNo) {
				if(depth>1&& depth<dist[iNo][map[nextY][nextX]]) {
					dist[iNo][map[nextY][nextX]] = depth;
					dist[map[nextY][nextX]][iNo] = depth;
					return;
				}
			}
		}
	}
	
	static int[] dx = {1,0,-1,0};
	static int[] dy = {0,1,0,-1};
	static int[][] dist;
	static int n,m;
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		n = Integer.parseInt(split[0]);
		m = Integer.parseInt(split[1]);
		map = new int[n][m];
		for(int i = 0; i<n; i++) {
			split = in.readLine().split(" ");
			for(int j = 0; j<m;j++) {
				if(split[j].equals("1")) map[i][j] = -1;
			}
		}
		List<Island> iList = new ArrayList<>();
		int islandNo = 1;
		for(int i = 0; i<n;i++) {
			for(int j = 0; j<m;j++) {
				if(map[i][j]==-1) {
					map[i][j] = islandNo;
					Queue<Point> q = new ArrayDeque<>();
					q.add(new Point(i,j));
					while(!q.isEmpty()) {
						Point current = q.poll();
						for(int k = 0; k<4;k++) {
							int nextX = current.x+dx[k];
							int nextY = current.y+dy[k];
							if(nextY>=0&&nextX>=0&&nextY<n&&nextX<m&&map[nextY][nextX]==-1) {
								map[nextY][nextX] = islandNo;
								q.add(new Point(nextY,nextX));
							}
						}
						
					}
					iList.add(new Island(islandNo++,new Point(i,j)));
					
				}
			}
		}
		int[] primMinEdge = new int[islandNo]; 
		dist = new int[islandNo][islandNo];
		for(int i = 0;i<islandNo;i++) {
			for(int j = 0; j<islandNo;j++) {
				dist[i][j] = 100;
			}
			primMinEdge[i] = Integer.MAX_VALUE;
		}
		for(Island island:iList) {
			Point startP =island.startPoint;
			Queue<Point> q= new ArrayDeque<>();
			q.add(startP);
			boolean[][][] visited = new boolean[n][m][4];
			while(!q.isEmpty()) {
				Point cur = q.poll();
				for(int i = 0; i<4;i++) {
					int nextX = cur.x+dx[i];
					int nextY = cur.y+dy[i];
					if(nextY>=0&&nextX>=0&&nextY<n&&nextX<m&&map[nextY][nextX]==island.no&&!visited[nextY][nextX][i]) {
						visited[nextY][nextX][i] = true;
						q.add(new Point(nextY,nextX));
					}else if(nextY>=0&&nextX>=0&&nextY<n&&nextX<m&&map[nextY][nextX]==0) {
						dfs(1,nextY,nextX,i,island.no);
					}
					
				}
			}
		}
		
		
		boolean[] primVisited = new boolean[islandNo];
		int vertexCnt = 0;
		int result = 0; 
		primMinEdge[1] = 0; 

		for (int cnt = 1; cnt < islandNo; cnt++) {
			int min = Integer.MAX_VALUE;
			int current = 0;

			for (int i = 1; i < islandNo; i++) {
				if (!primVisited[i] && min > primMinEdge[i]) {
					min = primMinEdge[i];
					current = i;
				}
			}
			primVisited[current] = true;
			result += min;
			if(cnt==islandNo-1) break;
			for (int i = 1; i < islandNo; i++) {
				if (!primVisited[i] 
						&& dist[current][i] != 100 
						&& primMinEdge[i] > dist[current][i]) {
					primMinEdge[i] = dist[current][i];

				}
			}
		}
		boolean visitedAll = true;
		for(int i = 1;i<islandNo;i++) {
			if(!primVisited[i]) {
				visitedAll=false;
			}
		}
		if(visitedAll) {
			System.out.println(result);
		}else {
			System.out.println(-1);
		}

		
	}

}