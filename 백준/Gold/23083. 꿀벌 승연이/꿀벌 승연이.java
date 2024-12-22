import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static int mod = 1000000007;
	static int[][] house;

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int n = Integer.parseInt(split[0]);
		int m = Integer.parseInt(split[1]);
		house = new int[n + 2][m + 1];
		int k = Integer.parseInt(in.readLine());
		for (int i = 0; i < k; i++) {
			split = in.readLine().split(" ");
			int x = Integer.parseInt(split[0]);
			int y = Integer.parseInt(split[1]);
			house[x][y] = -1;
		}
		house[1][1] = 1;
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if (house[j][i] == -1)
					continue;
				house[j][i] += Math.max(0, house[j][i - 1]);
				house[j][i] += Math.max(0, house[j - 1][i]);
				house[j][i] %= mod;
				house[j][i] += (i % 2 == 0) ? Math.max(0, house[j + 1][i - 1]) : Math.max(0, house[j - 1][i - 1]);
				house[j][i] %= mod;
			}
		}
		System.out.println(house[n][m]);

	}

}