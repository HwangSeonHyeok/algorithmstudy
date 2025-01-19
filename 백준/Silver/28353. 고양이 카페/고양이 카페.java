import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int n = Integer.parseInt(split[0]);
		int k = Integer.parseInt(split[1]);
		int[] cats = new int[n];
		split = in.readLine().split(" ");
		for (int i = 0; i < n; i++) {
			cats[i] = Integer.parseInt(split[i]);
		}
		Arrays.sort(cats);
		int left = 0;
		int right = n - 1;
		int ans = 0;
		while (left < right) {
			if (cats[left] + cats[right] <= k) {
				ans++;
				left++;
				right--;
			} else {
				right--;
			}
		}
		System.out.println(ans);

	}

}