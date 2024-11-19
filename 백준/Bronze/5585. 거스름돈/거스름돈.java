import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = 1000 - Integer.parseInt(in.readLine());
		int ans = 0;
		ans += n / 500;
		n %= 500;
		ans += n / 100;
		n %= 100;
		ans += n / 50;
		n %= 50;
		ans += n / 10;
		n %= 10;
		ans += n / 5;
		n %= 5;
		ans += n / 1;
		System.out.println(ans);

	}

}