import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(in.readLine());
		int bojSolved = Integer.parseInt(st.nextToken());
		int unionLV = Integer.parseInt(st.nextToken());
		int maxLV = Integer.parseInt(st.nextToken());
		int ans = 0;
		if (bojSolved < 1000) {
			System.out.println("Bad");
			return;
		}
		if (unionLV >= 8000 || maxLV >= 260)
			System.out.println("Very Good");
		else
			System.out.println("Good");

	}

}