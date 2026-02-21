import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int m = Integer.parseInt(st.nextToken());
		int h = Integer.parseInt(st.nextToken());
		int n = Integer.parseInt(in.readLine());
		int ans = 0;
		for (int i = 0; i < n; i++) {
			st = new StringTokenizer(in.readLine());
			int c = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			ans += Math.max(c * m, h * b);
		}
		System.out.println(ans);
	}

}