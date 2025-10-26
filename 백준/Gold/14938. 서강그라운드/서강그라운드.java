import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int n = Integer.parseInt(st.nextToken());
		int m = Integer.parseInt(st.nextToken());
		int r = Integer.parseInt(st.nextToken());
		int[] itemCnt = new int[n];
		st = new StringTokenizer(in.readLine());
		for (int i = 0; i < n; i++) {
			itemCnt[i] = Integer.parseInt(st.nextToken());
		}
		int[][] dist = new int[n][n];
		for (int i = 0; i < n; i++) {
			Arrays.fill(dist[i], (int) 1e9);
			dist[i][i] = 0;
		}

		for (int i = 0; i < r; i++) {
			st = new StringTokenizer(in.readLine());
			int a = Integer.parseInt(st.nextToken()) - 1;
			int b = Integer.parseInt(st.nextToken()) - 1;
			int l = Integer.parseInt(st.nextToken());
			dist[a][b] = l;
			dist[b][a] = l;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < n; k++) {
					dist[j][k] = Math.min(dist[j][k], dist[j][i] + dist[i][k]);
				}
			}
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			int items = 0;
			for (int j = 0; j < n; j++) {
				if (dist[i][j] <= m) {
					items += itemCnt[j];
				}
			}
			ans = Math.max(ans, items);

		}
		System.out.println(ans);

	}

}