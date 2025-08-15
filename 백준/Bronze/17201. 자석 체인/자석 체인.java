import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		String magnet = in.readLine();
		boolean isAble = true;
		for (int i = 1; i < n * 2; i++) {
			if (magnet.charAt(i) == magnet.charAt(i - 1))
				isAble = false;
		}
		if (isAble) {
			System.out.println("Yes");
		} else {
			System.out.println("No");
		}

	}

}