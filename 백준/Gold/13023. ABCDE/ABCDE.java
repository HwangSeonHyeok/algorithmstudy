import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.List;
import java.util.Queue;

public class Main {

	static List<Integer>[] relations;
	static boolean[] visited;
	static int n, m;

	private static int dfs(int current, int depth) {
		if (depth == 5) {
			return 1;
		}
		int result = 0;

		visited[current] = true;

		List<Integer> currentR = relations[current];
		for (int j = 0; j < currentR.size(); j++) {
			if (!visited[currentR.get(j)]) {
				result = dfs(currentR.get(j), depth + 1);
				visited[currentR.get(j)] = false;
				if(result==1)return result;
			}
		}

		return result;
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

		String[] split = in.readLine().split(" ");
		n = Integer.parseInt(split[0]);
		m = Integer.parseInt(split[1]);
		relations = new ArrayList[n];
		for (int i = 0; i < n; i++) {
			relations[i] = new ArrayList<>();
		}

		for (int i = 0; i < m; i++) {
			split = in.readLine().split(" ");
			int from = Integer.parseInt(split[0]);
			int to = Integer.parseInt(split[1]);
			relations[from].add(to);
			relations[to].add(from);
		}
		int ans = 0;

		for (int i = 0; i < n; i++) {
			visited = new boolean[n];
			ans = dfs(i, 1);
			if (ans == 1)
				break;
		}
		System.out.println(ans);
	}

}