import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		boolean[] hasClass = new boolean[6];
		for (int i = 0; i < n; i++) {
			int num = Integer.parseInt(in.readLine());
			hasClass[num] = true;
		}
		if (hasClass[1] && hasClass[2] && hasClass[3] && hasClass[4] && hasClass[5]) {
			System.out.println("NO");
		} else {
			System.out.println("YES");
		}

	}

}