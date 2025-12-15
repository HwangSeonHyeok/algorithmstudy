import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		double n = Double.parseDouble(in.readLine());
		System.out.println(n - 0.3);
	}

}