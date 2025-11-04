import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		if (n >= 229) {
			System.out.println(4);
		} else if (n >= 218) {
			System.out.println(3);
		} else if (n >= 206) {
			System.out.println(2);
		} else {
			System.out.println(1);
		}

	}

}