import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		long n = Long.parseLong(in.readLine());
		if (n % 7 == 2 || n % 7 == 0) {
			System.out.println("CY");
		} else {
			System.out.println("SK");
		}

	}

}