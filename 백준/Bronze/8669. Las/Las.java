import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.Set;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		Set<Integer> m = new HashSet<>();
		int ans = 0;
		for (int i = 0; i < n; i++) {
			StringTokenizer st = new StringTokenizer(in.readLine());
			int thick = Integer.parseInt(st.nextToken());
			int type = Integer.parseInt(st.nextToken());
			if (!m.contains(type)) {
				ans++;
				m.add(type);
			}
		}
		System.out.println(ans);

	}

}