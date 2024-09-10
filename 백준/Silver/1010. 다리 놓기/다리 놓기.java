import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int[][] dp = new int[31][31];
		for (int i = 0; i <= 30; i++) {
			for (int j = 0; j <= i; j++) {
				if (j == 0 || j == i) {
					dp[i][j] = 1;
				} else {
					dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
				}
			}
		}
		int t = Integer.parseInt(in.readLine());
		for (int i = 0; i < t; i++) {
			String[] split = in.readLine().split(" ");
			int n = Integer.parseInt(split[0]);
			int m = Integer.parseInt(split[1]);
			System.out.println(dp[m][n]);
		}
	}
}