import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int l = Integer.parseInt(st.nextToken());
		int p = Integer.parseInt(st.nextToken());
		int people = l * p;
		StringBuilder sb = new StringBuilder();
		st = new StringTokenizer(in.readLine());
		for (int i = 0; i < 5; i++) {
			int post = Integer.parseInt(st.nextToken());
			sb.append(post - people).append(" ");
		}
		System.out.println(sb);

	}

}