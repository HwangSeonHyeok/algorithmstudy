import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String str = in.readLine();
		if (str.equals("NLCS")) {
			System.out.println("North London Collegiate School");
		} else if (str.equals("BHA")) {
			System.out.println("Branksome Hall Asia");
		} else if (str.equals("KIS")) {
			System.out.println("Korea International School");
		} else {
			System.out.println("St. Johnsbury Academy");
		}

	}

}