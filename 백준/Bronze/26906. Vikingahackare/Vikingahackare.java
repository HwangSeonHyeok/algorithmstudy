import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		Map<String, String> m = new HashMap<>();
		for (int i = 0; i < n; i++) {
			StringTokenizer st = new StringTokenizer(in.readLine());
			String c = st.nextToken();
			String bin = st.nextToken();
			m.put(bin, c);
		}
		String vLanguage = in.readLine();
		StringBuilder sb = new StringBuilder();
		for (int i = 0; i < vLanguage.length(); i += 4) {
			String current = vLanguage.substring(i, i + 4);
			if (m.containsKey(current)) {
				sb.append(m.get(current));
			} else {
				sb.append("?");
			}
		}
		System.out.println(sb);
	}

}