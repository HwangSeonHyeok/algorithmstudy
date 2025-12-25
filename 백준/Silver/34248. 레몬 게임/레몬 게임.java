import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int one = 0;
		int two = 0;
		StringTokenizer st = new StringTokenizer(in.readLine());
		for (int i = 0; i < n; i++) {
			int lemon = Integer.parseInt(st.nextToken());
			if (lemon == 1) {
				one++;
			} else {
				two++;
			}
		}
		if (one >= two && (one - two) % 3 == 0) {
			System.out.println("Yes");
		} else {
			System.out.println("No");
		}

	}

}