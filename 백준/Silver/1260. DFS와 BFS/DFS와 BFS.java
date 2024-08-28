import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Queue;



public class Main {
	
	static int N, M, V;
	static boolean[][] matrix; // 인접리스트
	static boolean[] visited;
	
	
	private static void dfs(int current) {
		
		visited[current] = true;
		System.out.print(current + " ");  

		for(int i = 1; i<=N; i++ ) {
			
			if(matrix[current][i] == true&&!visited[i]) {
				dfs(i);
			}
			
		}
		
	}
	
	private static void bfs(int start) {
		Queue<Integer> q = new ArrayDeque<>();
		visited[start] = true;
		q.add(start);
		while(!q.isEmpty()) {
			int current = q.poll();
			System.out.print(current + " ");  
			for(int i = 1; i<=N; i++ ) {
				if(matrix[current][i] == true&&!visited[i]) {
					visited[i] = true;
					q.add(i);
				}
				
			}
			
		}
		
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in  = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		
		N = Integer.parseInt(split[0]);
		M = Integer.parseInt(split[1]);
		V = Integer.parseInt(split[2]);
		matrix = new boolean[N+1][N+1];
		
		for(int i = 0; i<M; i++) {
			split = in.readLine().split(" ");
			int from = Integer.parseInt(split[0]);
			int to = Integer.parseInt(split[1]);
			matrix[from][to] = true;
			matrix[to][from] = true;
		}
		
		visited = new boolean[N+1];
		dfs(V);
		System.out.println();
		visited = new boolean[N+1];
		bfs(V);

	}


}