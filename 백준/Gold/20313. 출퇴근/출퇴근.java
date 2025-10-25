import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {
	static class Node implements Comparable<Node> {
		int num, magic;
		long cost;

		public Node(int num, long cost, int magic) {
			this.num = num;
			this.cost = cost;
			this.magic = magic;
		}

		@Override
		public int compareTo(Node o) {
			if (this.cost > o.cost) {
				return 1;
			} else if (this.cost == o.cost) {
				return this.magic - o.magic;
			}
			return -1;
		}
	}

	static class RoadInfo {
		int dest, costIdx;

		public RoadInfo(int dest, int costIdx) {
			this.dest = dest;
			this.costIdx = costIdx;
		}
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int n = Integer.parseInt(st.nextToken());
		int m = Integer.parseInt(st.nextToken());
		int a = Integer.parseInt(st.nextToken());
		int b = Integer.parseInt(st.nextToken());
		List<RoadInfo>[] roadInfoList = new ArrayList[n + 1];
		long[][] costs = new long[101][m];
		for (int i = 1; i <= n; i++) {
			roadInfoList[i] = new ArrayList<>();
		}
		for (int i = 0; i < m; i++) {
			st = new StringTokenizer(in.readLine());
			int u = Integer.parseInt(st.nextToken());
			int v = Integer.parseInt(st.nextToken());
			long cost = Long.parseLong(st.nextToken());
			roadInfoList[u].add(new RoadInfo(v, i));
			roadInfoList[v].add(new RoadInfo(u, i));
			costs[0][i] = cost;
		}
		int k = Integer.parseInt(in.readLine());
		for (int i = 1; i <= k; i++) {
			st = new StringTokenizer(in.readLine());
			for (int j = 0; j < m; j++) {
				costs[i][j] = Long.parseLong(st.nextToken());
			}
		}
		PriorityQueue<Node> pq = new PriorityQueue<Node>();
		pq.add(new Node(a, 0, 0));
		long[][] dist = new long[k + 1][n + 1];
		for (int i = 0; i <= k; i++) {
			Arrays.fill(dist[i], Long.MAX_VALUE);
		}
		dist[0][a] = 0;
		while (!pq.isEmpty()) {
			Node current = pq.poll();
			if (current.cost > dist[current.magic][current.num])
				continue;
			if (current.magic < k && dist[current.magic][current.num] < dist[current.magic + 1][current.num]) {
				pq.add(new Node(current.num, current.cost, current.magic + 1));
				dist[current.magic + 1][current.num] = dist[current.magic][current.num];
			}
			for (RoadInfo roadInfo : roadInfoList[current.num]) {
				long nextDist = dist[current.magic][current.num] + costs[current.magic][roadInfo.costIdx];
				if (dist[current.magic][roadInfo.dest] <= nextDist)
					continue;
				dist[current.magic][roadInfo.dest] = nextDist;
				pq.add(new Node(roadInfo.dest, nextDist, current.magic));
			}
		}
		long ans = Long.MAX_VALUE;
		for (int i = 0; i <= k; i++) {
			ans = Math.min(ans, dist[i][b]);
		}

		System.out.println(ans);
	}

}