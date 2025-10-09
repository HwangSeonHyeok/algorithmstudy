import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int n = Integer.parseInt(st.nextToken());
		int m = Integer.parseInt(st.nextToken());
		if (n == m)
			System.out.println(n);
		else if (n < m) {
			if ((m / n) % 2 == 0) {
				System.out.println(m % n);
			} else {
				System.out.println(n - (m % n));
			}
		} else
			System.out.println(m);

	}

}