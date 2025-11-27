import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(in.readLine());
		StringBuilder sb = new StringBuilder();
		for (int tc = 1; tc <= t; tc++) {
			StringTokenizer st = new StringTokenizer(in.readLine());
			int k = Integer.parseInt(st.nextToken());
			int n = Integer.parseInt(st.nextToken());
			int[] numbers = new int[n];
			for (int idx = 0; idx < n;) {
				st = new StringTokenizer(in.readLine());
				while (st.hasMoreTokens()) {
					numbers[idx++] = Integer.parseInt(st.nextToken());
				}
			}
			boolean[] goToBack = new boolean[n];
			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) {
					if (numbers[j] < numbers[i]) {
						goToBack[i] = true;
						break;
					}
				}
				if (!goToBack[i]) {
					for (int j = i - 1; j >= 0; j--) {
						if (numbers[j] < numbers[i] && goToBack[j]) {
							goToBack[i] = true;
							break;
						}
					}
				}
			}
			int ans = 0;
			for (int i = 0; i < n; i++) {
				if (goToBack[i])
					ans++;
			}
			sb.append(k).append(" ").append(ans).append("\n");
		}
		System.out.println(sb);
	}

}