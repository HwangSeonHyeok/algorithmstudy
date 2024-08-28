import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Queue;

public class Main {

	static boolean[] visited;

	static class Finding {
		int x;
		int time;

		public Finding(int x, int time) {
			this.x = x;
			this.time = time;
		}

		@Override
		public String toString() {
			return "Finding [current=" + x + ", time=" + time + "]";
		}

	}

	static int bfs(int start, int to) {
		Queue<Finding> q = new ArrayDeque<>();
		visited[start] = true;
		q.add(new Finding(start, 0));
		while (!q.isEmpty()) {
			Finding current = q.poll();
			if(current.x==to) {
				return current.time;
			}
			if(current.x+1<=200000 && current.x+1>=0 &&!visited[current.x+1]  ) {
				visited[current.x+1] = true;
				q.add(new Finding(current.x+1,current.time+1));
			}
			if(current.x-1<=200000 && current.x-1>=0 &&!visited[current.x-1]  ) {
				visited[current.x-1] = true;
				q.add(new Finding(current.x-1,current.time+1));
			}
			if(current.x*2<=200000 && current.x*2>=0 &&!visited[current.x*2]  ) {
				visited[current.x*2] = true;
				q.add(new Finding(current.x*2,current.time+1));
			}

		}

		return 0;
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

		String[] split = in.readLine().split(" ");
		int N = Integer.parseInt(split[0]);
		int M = Integer.parseInt(split[1]);
		visited = new boolean[200001];
		int ans = bfs(N, M);
		System.out.println(ans);

	}

}