import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(in.readLine());
		StringBuilder sb = new StringBuilder();
		for (int i = 0; i < t; i++) {
			StringTokenizer st = new StringTokenizer(in.readLine());
			int v = Integer.parseInt(st.nextToken());
			int e = Integer.parseInt(st.nextToken());
			sb.append(2 - v + e).append('\n');
		}
		System.out.println(sb);

	}

}