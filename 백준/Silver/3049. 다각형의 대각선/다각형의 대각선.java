import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int point = (n * (n - 1) * (n - 2) * (n - 3)) / 24;
		System.out.println(point);

	}

}