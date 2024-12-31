import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int a = Integer.parseInt(split[0]);
		int b = Integer.parseInt(split[1]);
		if (a > b) {
			System.out.println(b + b + 1);
		} else {
			System.out.println(a + a - 1);
		}
	}
}