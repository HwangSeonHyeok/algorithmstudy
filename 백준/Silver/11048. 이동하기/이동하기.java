import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int n =Integer.parseInt(split[0]);
		int m =Integer.parseInt(split[1]);
		int[][] map = new int[n+1][m+1];
		int[][] dp = new int[n+1][m+1];
		for(int i = 1; i<=n;i++) {
			split = in.readLine().split(" ");
			for(int j = 1; j<=m;j++) {
				map[i][j] = Integer.parseInt(split[j-1]);
			}
		}
		for(int i = 1; i<=n;i++) {
			for(int j = 1; j<=m;j++) {
				dp[i][j] = Math.max(dp[i-1][j-1],Math.max(dp[i-1][j],dp[i][j-1]))+map[i][j];
			}
		}
		System.out.println(dp[n][m]);

	}

}