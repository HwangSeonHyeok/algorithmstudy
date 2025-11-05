import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int ans = 300;
		for (int i = 0; i < 4; i++) {
			ans += Integer.parseInt(in.readLine());
		}
		if (ans <= 1800) {
			System.out.println("Yes");
		} else {
			System.out.println("No");
		}

	}

}