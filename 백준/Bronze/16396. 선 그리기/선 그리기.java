import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static int[] arr = new int[10001];

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());

		for (int i = 0; i < n; i++) {
			String[] split = in.readLine().split(" ");
			int a = Integer.parseInt(split[0]);
			int b = Integer.parseInt(split[1]);
			arr[a]++;
			arr[b]--;
		}
		int sum = 0;
		int ans = 0;
		for (int num : arr) {
			sum += num;
			if (sum > 0)
				ans++;
		}
		System.out.println(ans);

	}

}