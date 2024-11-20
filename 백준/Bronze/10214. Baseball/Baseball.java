import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(in.readLine());
		for (int i = 0; i < t; i++) {
			int y = 0, k = 0;
			for (int j = 0; j < 9; j++) {
				String[] split = in.readLine().split(" ");
				y += Integer.parseInt(split[0]);
				k += Integer.parseInt(split[1]);
			}
			if (y > k) {
				System.out.println("Yonsei");
			} else if (y < k) {
				System.out.println("Korea");
			} else {
				System.out.println("Draw");
			}
		}

	}

}