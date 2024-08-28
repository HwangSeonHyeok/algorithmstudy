import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.List;
import java.util.Queue;

public class Main {

	static int[] population;

	static List<Integer>[] edges;
	static boolean[] visited;
	static int totalP = 0;
	static int ans = Integer.MAX_VALUE;
	static int n;

	private static void dfs(int current, int depth, int popSum) {
		if (depth > n)
			return;
		visited[current] = true;
		int tmpans = Math.abs((totalP - popSum) - popSum);
		if (tmpans < ans) {
			boolean flag = true;
			for (int i = 1; i <= n; i++) {
				if (visited[i]) {
					boolean[] tmpvisited = new boolean[n + 1];
					Queue<Integer> q = new ArrayDeque();
					q.add(i);
					tmpvisited[i] = true;
					while (!q.isEmpty()) {
						int tmpCurrent = q.poll();
						List<Integer> currentR = edges[tmpCurrent];
						for (int j = 0; j < currentR.size(); j++) {
							if (visited[currentR.get(j)] && !tmpvisited[currentR.get(j)]) {
								q.add(currentR.get(j));
								tmpvisited[currentR.get(j)] = true;
							}
						}
					}

					for (int j = 1; j <= n; j++) {
						if (visited[j]&&!tmpvisited[j]) {
							flag = false;
							break;
						}
					}
					break;
				}

			}
			if (flag) {
				for (int i = 1; i <= n; i++) {
					if (!visited[i]) {
						boolean[] tmpvisited = new boolean[n + 1];
						for (int j = 1; j <= n; j++) {
							tmpvisited[j] = visited[j];
						}
						Queue<Integer> q = new ArrayDeque();
						q.add(i);
						tmpvisited[i] = true;
						while (!q.isEmpty()) {
							int tmpCurrent = q.poll();
							List<Integer> currentR = edges[tmpCurrent];
							for (int j = 0; j < currentR.size(); j++) {
								if (!tmpvisited[currentR.get(j)]) {
									q.add(currentR.get(j));
									tmpvisited[currentR.get(j)] = true;
								}
							}
						}
						flag = true;
						for (int j = 1; j <= n; j++) {
							if (!tmpvisited[j]) {
								flag = false;
								break;
							}
						}
						if (flag) {
							if (tmpans < ans) {
								ans = tmpans;
							}
						}
						break;
					}

				}
			}
		}
		for (int i = 1; i <= n; i++) {
			if (!visited[i]) {
				dfs(i, depth + 1, popSum + population[i]);
				visited[i] = false;
			}
		}

		return;
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(in.readLine());
		ans = Integer.MAX_VALUE;
		population = new int[n + 1];
		edges = new ArrayList[n + 1];
		for (int i = 0; i <= n; i++) {
			edges[i] = new ArrayList<>();
		}

		String[] split = in.readLine().split(" ");
		for (int i = 1; i <= n; i++) {
			population[i] = Integer.parseInt(split[i - 1]);
			totalP += population[i];
		}
		for (int i = 1; i <= n; i++) {
			split = in.readLine().split(" ");
			int edgeCnt = Integer.parseInt(split[0]);
			for (int j = 1; j <= edgeCnt; j++) {
				int to = Integer.parseInt(split[j]);
				edges[i].add(to);
			}
		}
		
		visited = new boolean[n + 1];
		dfs(1, 0, population[1]);
		
		if (ans >= totalP) {
			System.out.println(-1);
		} else {
			System.out.println(ans);
		}

	}

}