import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		String[] split = in.readLine().split(" ");
		int[] arr = new int[n];
		for (int i = 0; i < n; i++) {
			arr[i] = Integer.parseInt(split[i]);
		}
		int ans = arr[0];
		for (int i = 1; i < n - 1; i++) {
			ans = Math.max(ans, arr[i] + Math.min(arr[i - 1], arr[i + 1]));

		}
		ans = Math.max(ans, arr[n - 1]);
		System.out.println(ans);
	}

}