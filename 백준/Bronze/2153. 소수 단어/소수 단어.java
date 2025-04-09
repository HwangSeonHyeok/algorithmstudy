import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	static String isPrime(int sum) {
		for (int i = 2; i <= sum / 2; i++) {
			if (sum % i == 0) {
				return "It is not a prime word.";
			}
		}
		return "It is a prime word.";
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String str = in.readLine();
		int sum = 0;
		for (int i = 0; i < str.length(); i++) {
			char c = str.charAt(i);
			if (c >= 'a') {
				sum += c - 'a' + 1;
			} else {
				sum += c - 'A' + 27;
			}
		}
		System.out.println(isPrime(sum));

	}

}
