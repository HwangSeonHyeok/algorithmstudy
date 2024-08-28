import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		long a = Long.parseLong(split[0]);
		long b = Long.parseLong(split[1]);
		System.out.println((a + b) * (a - b));

	}

}