import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int t = Integer.parseInt(in.readLine());
		int sum = 0;
		String[] split = in.readLine().split(" ");
		for (int i = 0; i < t; i++) {
			sum += Integer.parseInt(split[i]);
		}
		if (sum >= n) {
			System.out.println("Padaeng_i Happy");
		} else {
			System.out.println("Padaeng_i Cry");
		}

	}

}