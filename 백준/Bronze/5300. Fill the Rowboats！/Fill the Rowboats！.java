import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		StringBuilder sb = new StringBuilder();
		for (int i = 1; i <= n; i++) {
			sb.append(i).append(' ');
			if (i % 6 == 0) {
				sb.append("Go! ");
			}
		}
		if (n % 6 != 0)
			sb.append("Go!");
		System.out.println(sb);
	}

}