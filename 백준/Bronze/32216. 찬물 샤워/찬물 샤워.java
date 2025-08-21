import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int n = Integer.parseInt(st.nextToken());
		int k = Integer.parseInt(st.nextToken());
		int t = Integer.parseInt(st.nextToken());
		st = new StringTokenizer(in.readLine());
		int ans = 0;
		for (int i = 0; i < n; i++) {
			int d = Integer.parseInt(st.nextToken());
			if (t > k) {
				t = t + d - Math.abs(t - k);
			} else {
				t = t + d + Math.abs(t - k);
			}
			ans += Math.abs(t - k);
		}
		System.out.println(ans);
	}

}