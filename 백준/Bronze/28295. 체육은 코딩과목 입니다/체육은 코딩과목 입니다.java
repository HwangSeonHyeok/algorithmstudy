import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		char[] dir = { 'N', 'E', 'S', 'W' };
		int degree = 0;
		for (int i = 0; i < 10; i++) {
			degree += Integer.parseInt(in.readLine());
		}

		System.out.println(dir[degree % 4]);
	}

}