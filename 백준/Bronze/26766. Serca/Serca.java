import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(in.readLine());
		StringBuilder sb = new StringBuilder();
		for (int i = 0; i < n; i++) {
			sb.append(" @@@   @@@ \n");
			sb.append("@   @ @   @\n");
			sb.append("@    @    @\n");
			sb.append("@         @\n");
			sb.append(" @       @ \n");
			sb.append("  @     @  \n");
			sb.append("   @   @   \n");
			sb.append("    @ @    \n");
			sb.append("     @     \n");

		}
		System.out.println(sb);

	}

}