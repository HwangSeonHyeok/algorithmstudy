import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int input = Integer.parseInt(in.readLine());
		int a, b = 0;
		if (input % 10 == 0) {
			a = input / 100;
			b = 10;
		} else {
			a = input / 10;
			b = input % 10;

		}
		System.out.println(a + b);
	}
}
