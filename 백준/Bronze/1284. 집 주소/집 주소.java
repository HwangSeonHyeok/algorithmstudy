import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuffer sb = new StringBuffer();
		while (true) {
			String str = in.readLine();
			int length = str.length() + 1;
			if (str.equals("0"))
				break;
			for (int i = 0; i < str.length(); i++) {
				int digit = (int) (str.charAt(i) - '0');
				if (digit == 1)
					length += 2;
				else if (digit == 0)
					length += 4;
				else
					length += 3;
			}
			sb.append(length).append("\n");

		}
		System.out.println(sb);

	}

}