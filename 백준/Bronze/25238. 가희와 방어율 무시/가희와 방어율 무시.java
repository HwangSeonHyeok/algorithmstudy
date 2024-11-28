import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int d = Integer.parseInt(split[0]);
		int musi = Integer.parseInt(split[1]);
		d = d * (100 - musi) / 100;
		if (d < 100) {
			System.out.println(1);
		} else {
			System.out.println(0);
		}

	}

}