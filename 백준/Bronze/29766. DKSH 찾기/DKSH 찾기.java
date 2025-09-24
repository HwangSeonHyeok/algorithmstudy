import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		char[] dksh = in.readLine().toCharArray();
		int ans = 0;
		for (int i = 0; i < dksh.length - 3; i++) {
			char c1 = dksh[i];
			char c2 = dksh[i + 1];
			char c3 = dksh[i + 2];
			char c4 = dksh[i + 3];
			if (c1 == 'D' && c2 == 'K' && c3 == 'S' && c4 == 'H') {
				ans++;
			}
		}
		System.out.println(ans);

	}

}