import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		int n = Integer.parseInt(in.readLine());
		for (int i = 0; i < n; i++) {
			int ans = 50;
			String ballons = in.readLine();
			int a = 0;
			int b = 0;
			for (int j = 0; j < ballons.length(); j++) {
				char c = ballons.charAt(j);
				if (c == 'a') {
					a++;
				} else {
					b++;
				}
			}
			ans = Math.min(ans, Math.min(a, b));
			sb.append(ans).append('\n');
		}
		System.out.println(sb);

	}

}