import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		long a = Long.parseLong(split[0]);
		long b = Long.parseLong(split[1]);
		long ans = 0;
		if (b >= a + 1) {
			ans = a + 1;
		} else {
			ans = b;
		}
		System.out.println(ans);
	}

}