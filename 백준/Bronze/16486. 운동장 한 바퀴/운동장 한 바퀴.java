import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static double pie = 3.141592;

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		double a = Double.parseDouble(in.readLine());
		double b = Double.parseDouble(in.readLine());
		System.out.println(a * 2 + b * 2 * pie);

	}

}