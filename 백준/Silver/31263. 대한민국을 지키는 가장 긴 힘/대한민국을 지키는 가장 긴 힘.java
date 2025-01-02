import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static String num = "0";

	static int charToInt(int idx) {
		return num.charAt(idx) - '0';
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		num += in.readLine();
		int[] dp = new int[n + 1];
		for (int i = 0; i <= n; i++) {
			dp[i] = Integer.MAX_VALUE;
		}
		dp[0] = 0;
		dp[1] = 1;
		for (int i = 2; i <= n; i++) {
			int cur = charToInt(i);
			int prev = charToInt(i - 1);
			int pprev = charToInt(i - 2);
			if (cur != 0) {
				dp[i] = dp[i - 1] + 1;
			}
			if (prev != 0) {
				dp[i] = Math.min(dp[i], dp[i - 2] + 1);
			}
			if (pprev != 0 && pprev * 100 + prev * 10 + cur <= 641) {
				dp[i] = Math.min(dp[i], dp[i - 3] + 1);
			}
		}
		System.out.println(dp[n]);

	}

}