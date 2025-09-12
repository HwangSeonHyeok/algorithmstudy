import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int B = Integer.parseInt(in.readLine());
		B /= 11;
		B *= 10;
		System.out.println(B);

	}

}