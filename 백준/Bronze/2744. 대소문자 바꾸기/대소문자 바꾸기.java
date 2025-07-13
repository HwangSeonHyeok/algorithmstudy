import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuffer sb = new StringBuffer();
		String str = in.readLine();
		String ans = "";
		for (int i = 0; i < str.length(); i++) {
			char c = str.charAt(i);
			if (c >= 'a' && c <= 'z') {
				sb.append((char) (c - 'a' + 'A'));
			} else {
				sb.append((char) (c - 'A' + 'a'));
			}
		}
		System.out.println(sb);

	}

}