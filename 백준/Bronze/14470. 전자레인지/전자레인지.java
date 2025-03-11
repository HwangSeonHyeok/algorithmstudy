import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int a = Integer.parseInt(in.readLine());
		int b = Integer.parseInt(in.readLine());
		int c = Integer.parseInt(in.readLine());
		int d = Integer.parseInt(in.readLine());
		int e = Integer.parseInt(in.readLine());
		int ans = 0;
		if (a < 0) {
			ans += d;
			ans -= c * a;
		}
		ans += (b - Math.max(0, a)) * e;
		System.out.println(ans);
	}

}
