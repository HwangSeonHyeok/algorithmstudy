import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	static char[] charMap = new char[128];
	static String str;

	static void changeChar(char src, char dest) {
		for (int i = 0; i < 128; i++) {
			if (charMap[i] == src) {
				charMap[i] = dest;
			}
		}
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		String[] split = in.readLine().split(" ");
		str = split[0];
		int n = Integer.parseInt(split[1]);
		for (int i = 0; i < 128; i++) {
			charMap[i] = (char) i;
		}
		for (int i = 0; i < n; i++) {
			split = in.readLine().split(" ");
			int cmd = Integer.parseInt(split[0]);
			if (cmd == 1) {
				char src = split[1].charAt(0);
				char dest = split[2].charAt(0);
				changeChar(src, dest);
			} else {
				for (int j = 0; j < str.length(); j++) {
					sb.append(charMap[str.charAt(j)]);
				}
				sb.append("\n");
			}
		}
		System.out.println(sb);

	}

}
