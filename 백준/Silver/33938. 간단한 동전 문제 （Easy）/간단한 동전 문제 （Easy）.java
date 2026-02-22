import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int n = Integer.parseInt(st.nextToken());
		int b = Integer.parseInt(st.nextToken());
		if (b == 0) {
			System.out.println(0);
			return;
		}
		if (n == 0) {
			System.out.println(-1);
			return;
		}
		int[] coins = new int[n];
		st = new StringTokenizer(in.readLine());
		for (int i = 0; i < n; i++) {
			coins[i] = Integer.parseInt(st.nextToken());
		}
		int ans = 10000;
		for (int i = 0; i < 2000; i++) {
			int current = i * coins[0];
			if (current == b) {
				ans = Math.min(ans, i);
			}
			if (n == 2) {
				for (int j = 1; j <= 2000; j++) {
					current += coins[1];
					if (current == b) {
						ans = Math.min(ans, i + j);
					}
				}
			}

		}
		if (ans == 10000)
			ans = -1;
		System.out.println(ans);
	}

}