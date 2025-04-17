import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int n = Integer.parseInt(split[0]);
		int m = Integer.parseInt(split[1]);
		if (m <= 2) {
			System.out.println("NEWBIE!");
		} else if (m <= n) {
			System.out.println("OLDBIE!");
		} else {
			System.out.println("TLE!");
		}

	}

}
