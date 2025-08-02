import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int ans = 0;
		while (in.readLine() != null) {
			ans++;
		}
		System.out.println(ans);
	}

}