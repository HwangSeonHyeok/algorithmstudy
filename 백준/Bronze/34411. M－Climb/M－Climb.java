import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int m = Integer.parseInt(in.readLine());
		int n = Integer.parseInt(in.readLine());
		int y = Integer.parseInt(in.readLine());
		System.out.println(m * n);

	}

}