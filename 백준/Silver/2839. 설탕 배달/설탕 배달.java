import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int ans = 0;
		if (n == 4 || n == 7) {
			ans = -1;
		} else if (n % 5 == 0) {
			ans = (n / 5);
		} else if (n % 5 == 1) {
			ans = (n / 5 - 1) + 2;
		} else if (n % 5 == 2) {
			ans = (n / 5 - 2) + 4;
		} else if (n % 5 == 3) {
			ans = (n / 5) + 1;
		} else if (n % 5 == 4) {
			ans = (n / 5 - 1) + 3;
		}
		System.out.println(ans);
	}
}