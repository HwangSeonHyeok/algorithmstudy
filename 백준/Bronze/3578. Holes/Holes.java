import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		StringBuilder sb = new StringBuilder();
		if (n == 0) {
			sb.append('1');
		} else if (n == 1) {
			sb.append('0');
		} else {
			if (n % 2 == 1) {
				sb.append('4');
				n--;
			}
			for (int i = 0; i < n / 2; i++) {
				sb.append('8');
			}
		}
		System.out.println(sb);

	}

}