import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int min = 100;
		int ans = 0;
		for (String str : split) {
			int num = Integer.parseInt(str);
			ans += num;
			min = Math.min(min, num);
		}
		ans -= min;
		System.out.println(ans);

	}
}
