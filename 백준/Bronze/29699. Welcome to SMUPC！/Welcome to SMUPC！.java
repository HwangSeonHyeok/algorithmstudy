import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String SMUPC = "WelcomeToSMUPC";
		int n = Integer.parseInt(in.readLine()) - 1;
		n %= SMUPC.length();
		System.out.println(SMUPC.charAt(n));

	}

}