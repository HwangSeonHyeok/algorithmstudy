import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		String[] split = in.readLine().split(" ");
		int ans = Integer.parseInt(split[0]);
		for (int i = 1; i < n; i++) {
			ans += 8;
			ans += Integer.parseInt(split[i]);
		}
		int d = ans / 24;
		int h = ans % 24;
		System.out.print(d + " ");
		System.out.println(h);

	}

}