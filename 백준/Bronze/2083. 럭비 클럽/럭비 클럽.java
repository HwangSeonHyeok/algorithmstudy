import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		while (true) {
			String[] split = in.readLine().split(" ");
			if (split[0].equals("#")) {
				break;
			}
			String name = split[0];
			int age = Integer.parseInt(split[1]);
			int weight = Integer.parseInt(split[2]);
			if (age > 17 || weight >= 80) {
				System.out.println(name + " Senior");
			} else {
				System.out.println(name + " Junior");
			}

		}
	}
}