import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int correct = Integer.parseInt(in.readLine());
		int ans = 0;
		StringTokenizer st = new StringTokenizer(in.readLine());
		for (int i = 0; i < 5; i++) {
			int tea = Integer.parseInt(st.nextToken());
			if (tea == correct)
				ans++;
		}
		System.out.println(ans);

	}

}