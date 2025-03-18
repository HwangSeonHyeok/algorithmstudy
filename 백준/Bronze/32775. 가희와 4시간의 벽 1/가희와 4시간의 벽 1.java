import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int subway = Integer.parseInt(in.readLine());
		int flight = Integer.parseInt(in.readLine());
		if (subway > flight) {
			System.out.println("flight");
		} else {
			System.out.println("high speed rail");
		}

	}

}
