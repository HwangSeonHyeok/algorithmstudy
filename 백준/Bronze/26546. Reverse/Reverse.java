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
			String str = st.nextToken();
			int s = Integer.parseInt(st.nextToken());
			int e = Integer.parseInt(st.nextToken());
			boolean skipmode = false;
			for (int j = 0; j < str.length(); j++) {
				if (j == s)
					skipmode = true;
				if (j == e)
					skipmode = false;
				if (skipmode)
					continue;
				char c = str.charAt(j);
				sb.append(c);
			}
			sb.append('\n');
		}
		System.out.println(sb);

	}

}