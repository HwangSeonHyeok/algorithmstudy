import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		String[] split = in.readLine().split(" ");
		int[] arr = new int[n];
		for (int i = 0; i < n; i++) {
			arr[i] = Integer.parseInt(split[i]);
		}
		Arrays.sort(arr);
		int max = 1;
		int count = 1;
		for (int i = 1; i < n; i++) {
			if (arr[i] == arr[i - 1]) {
				count++;
			} else {
				max = Math.max(max, count);
				count = 1;
			}
		}
		max = Math.max(max, count);
		System.out.println(max);

	}

}
