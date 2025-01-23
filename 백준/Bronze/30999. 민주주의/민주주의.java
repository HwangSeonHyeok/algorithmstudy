import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int n = Integer.parseInt(split[0]);
		int m = Integer.parseInt(split[1]);
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			String vote = in.readLine();
			int agree = 0;
			for (int j = 0; j < m; ++j) {
				if (vote.charAt(j) == 'O') {
					agree++;
				}
			}
			if (agree > m / 2)
				ans++;
		}
		System.out.println(ans);

	}

}