import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int[] sticks = new int[n];
		for (int i = 0; i < n; i++) {
			sticks[i] = Integer.parseInt(in.readLine());
		}
		int ans = 0;
		int current = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (sticks[i] > current) {
				ans++;
				current = sticks[i];
			}
		}
		System.out.println(ans);
	}

}