import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int sum = 0;
		for (int i = 0; i < 4; i++) {
			sum += Integer.parseInt(split[i]);
		}
		int N = Integer.parseInt(split[4]);
		System.out.println(Math.max(0, N * 4 - sum));

	}

}