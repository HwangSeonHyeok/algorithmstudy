import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int a = Integer.parseInt(st.nextToken());
		int b = Integer.parseInt(st.nextToken());
		int c = Integer.parseInt(st.nextToken());
		for (int i = 1; i <= 10; i++) {
			StringBuilder sb = new StringBuilder();
			for (int j = 1; j <= 10; j++) {
				if (a * i + j * b == c) {
					sb.append(j).append(' ');
				}
			}
			if (sb.isEmpty()) {
				System.out.println(0);
			} else {
				System.out.println(sb);
			}
		}
	}

}