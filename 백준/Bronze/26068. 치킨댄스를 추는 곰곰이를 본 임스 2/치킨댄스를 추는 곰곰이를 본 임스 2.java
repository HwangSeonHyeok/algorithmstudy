import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			String[] split = in.readLine().split("-");
			if (Integer.parseInt(split[1]) <= 90)
				cnt++;
		}
		System.out.println(cnt);
	}

}