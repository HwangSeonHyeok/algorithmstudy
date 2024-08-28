import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		StringBuffer sb = new StringBuffer();
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] split = in.readLine().split(" ");
		int n = Integer.parseInt(split[0]);
		int m = Integer.parseInt(split[1]);
		String str = in.readLine();
		for (int i = 0; i < m; i++) {
			int idx = 0;
			String ans = "false";
			String postIt = in.readLine();
			for (int j = 0; j < postIt.length(); j++) {
				if(str.charAt(idx)==postIt.charAt(j)) {
					idx++;
				}
				if(idx==n) {
					ans = "true";
					break;
				}
			}
			sb.append(ans+'\n');
		}
		System.out.print(sb.toString());
	}

}