import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int h = Integer.parseInt(in.readLine());
		int m = Integer.parseInt(in.readLine());
		System.out.println(h * 60 + m);

	}

}