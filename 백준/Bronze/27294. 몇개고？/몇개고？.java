import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int t = Integer.parseInt(st.nextToken());
		int s = Integer.parseInt(st.nextToken());
		if (s == 0 && t >= 12 && t <= 16) {
			System.out.println(320);
		} else {
			System.out.println(280);
		}

	}

}