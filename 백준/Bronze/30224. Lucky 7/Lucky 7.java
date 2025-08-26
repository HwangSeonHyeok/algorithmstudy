import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int ans = 0;
		if (n % 7 == 0)
			ans += 1;
		while (n > 0) {
			if (n % 10 == 7) {
				ans += 2;
				break;
			}
			n /= 10;
		}
		System.out.println(ans);
	}

}